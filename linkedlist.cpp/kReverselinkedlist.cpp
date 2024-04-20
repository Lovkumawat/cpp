#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

 void insertATtail(Node*&tail,Node*&head,int d){ 
    if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        head=temp;
    }else{
        Node*temp=new Node(d);
        tail->next=temp;
        tail=temp;
    }
 }
    Node*kReverse(Node*head,int k){                                   // K ORDER REVERSE LINKED LIST //
        // base case //
        
        if(head==NULL){
            return NULL;
        }
        Node*prev=NULL;
        Node*curr=head;
        Node*forward=NULL;
        int count = 0;
        while(curr!=NULL && count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        // recusion //
        if(forward!=NULL){
            head->next=kReverse(forward,k);
        }
        // return head of reverse  list //
        return prev;
        
    }
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*tail=NULL;
    Node*head=NULL;
    int size;
    cout<<"enter the size of list : "<<endl;
    cin>>size;
    int d;
    for(int i=0;i<size ;i++){
        cin>>d;
            insertATtail(tail,head,d);
    }
    int k;
    cout<<"enter the order of reverse : ";
    cin>>k;
    cout<<" Before reverse : "<<endl;
    print(head);
    cout<<endl;
    cout<<"After reverse of order "<<k<<endl;
    cout<<endl;
    Node*ans= kReverse(head,k);
    print(ans);
    return 0;
}