#include <iostream>
using namespace std;
// CREATION OF STACK USING:
// 1. CLASS AND ARRAY; 
// class stack{
//     public:
//     int top;
//     int*arr;
//     int size;
//     stack(int size){
//         this->size=size;
//         arr=new int[size];
//         top=-1;
//     }
//     void push(int element){
//         if(top==size-1){
//             cout<<"stack is overflow";
//         }else{
//             top++;
//             arr[top]=element;
//         }
//     }
//     void pop(){
//         if(top>=0){
//             top--;
//         }else{
//             cout<<"stack is underflow";
//         }
//     }
//     int peek(){
//         return arr[top];
//     }
//     bool isempty(){
//         if(top==-1){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };
//  USING LINKED LIST
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
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
    void push(int d){
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
    bool isempty(){
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
                cout<<temp->data;
                temp=temp->next;
            }
        }
    }
};


int main(){
     stack st;
     st.push(1);
     st.push(2);
     st.push(3);
     st.display();
   
    // st.push(6);
     st.pop();
      st.pop();
       st.pop();
        st.pop();
     
 }

 
