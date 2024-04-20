#include<iostream>
using namespace std;
class Node{
    public:
    int  data;
    Node*next;
    Node(int  data){
        this->data=data;
        this->next=NULL;
    }
};
class stack{
    Node*top;
    public:
    stack(){
        top=NULL;
    }
    void push(int  d){
        Node*temp=new Node(d);
        if(!temp){
            cout<<"stack is overflow";
            exit(1);
        }
        temp->next=top;
        top=temp;
    }
    void pop(){
        Node*temp;
        if(top==NULL){
            cout<<"stack is underflow";
            exit(1);
        }else{
        temp=top;
        top=top->next;
        free(temp);
        }
    }
    int peek(){
        if(top==NULL){
            cout<<"stack is underflow";
            exit(1);
        }else{
            return top->data;
        }
    }
    bool empty(){
        if(top==NULL){
            return true;
        }else{
            return false;
        }
    }
    void display(){
        Node*temp;
        if(top==NULL){
            cout<<"stack is underflow ";
            exit(1);
        }else{
            temp=top;
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
    }
};
void sortstack(stack &s){
    if(s.empty()){
        return;
    }else{
        char x=s.peek();
        s.pop();
        sortstack(s);
        stack temp;
        while(!s.empty() && s.peek()>x){
            temp.push(s.peek());
            s.pop();
        }
        s.push(x);
        while(!temp.empty()){
            s.push(temp.peek());
            temp.pop();
        }

    }
}
int main(){
    stack s;
    cout<<"enter th size of array : "<<endl;
    int size;
    cin>>size;
    int *arr=new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        s.push(arr[i]);
    }
        cout<<"stack is : "<<endl;
        s.display();
        sortstack(s);
        cout<<"sorted stack is : "<<endl;
            s.display();
        
        return 0;



}