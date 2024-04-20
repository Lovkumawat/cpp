#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this-> data=data;
        this->next=NULL;
    }
};
void insertATtail(Node*&tail,Node*&head,int d){
    if(tail==NULL){
        Node *temp=new Node(d);
        tail=temp;
        head=temp;
    }else{
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
    }
}
 Node*reverseList(Node*&head){
    if(head==NULL||head->next==NULL){
        return head;
    }else{
      Node*temp=head;
      Node*prev=NULL;
      Node*forward=NULL;
      while(temp!=NULL){
        forward=temp->next;
        temp->next=prev;
        prev=temp;
        temp=forward;
      }
      return  prev;
    }
 }
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*head=NULL;
    Node *tail=NULL;
    int size;
    cout<<"enter the size of list: ";
    cin>>size;
    int d;
    for(int i=0;i<size;i++){
        cin>>d;
        insertATtail(tail,head,d);
    }
        cout<<"before reverse : "<<endl;
    print(head);
  Node*ans=  reverseList(head);
    cout<<"after reverse : "<<endl;
    print(ans);
}