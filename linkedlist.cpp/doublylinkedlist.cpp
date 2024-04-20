#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
      ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with with data "<<value;
            cout<<endl;
    }
};
void inseratAThead(Node*&head,Node*&tail,int d){
    if(head==NULL){

    }else{
    Node*temp=new Node(d);
    temp->next=head;          // doubly link list //
    head->prev=temp;
    head=temp;
    }
}
void insertATtail(Node*&tail,Node *&head ,int d){
    if(tail==NULL){
     Node*temp=new Node(d);
     tail=temp;
     head=temp;
    }
    else{
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void insertATposition(Node*&head,Node*&tail,int position,int d){
    if(position==1){
        inseratAThead(head,tail,d);
        return;
    }
    Node*temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertATtail(tail,head,d);
        return ;
    }
    Node*curr=new Node(d);
    curr->next=temp->next;
    temp->next->prev=curr;
    temp->next=curr;
    curr->prev=temp;
}
void deletenode(Node*&head,int position){
    if(position==1){
        Node*temp=head;
        head=temp->next;
        temp->next->prev=NULL;
        temp->next=NULL;
    }else{
        Node*temp=NULL;
        Node*curr=head;
        int count=1;
        while(count<position){
            temp=curr;
            curr=curr->next;  //DOUBLY LINKED LIST DELETE NODE //
            count++;
        }
        temp->next=curr->next;
         curr->next->prev=temp;
        curr->prev=NULL;
        curr->next=NULL;
       
        delete curr;
    }
}
void printdata(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
  // Node*Node1=new Node(10);
    Node*head=NULL;
    Node*tail=NULL;
   // inseratAThead(head,tail,11);
    insertATtail(tail,head,12);
    insertATtail(tail,head,13);
    insertATtail(tail,head,14);
    insertATtail(tail,head,15);
   insertATposition(head,tail,5,20);
   // deletenode(head,3);
    printdata(head);
    return 0;
}