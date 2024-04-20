#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node*merge(Node*&firsthead,Node*&secondhead){
   
    Node*curr1=firsthead;
    Node*curr2=secondhead;
   Node*next1=curr1->next;
   Node*next2=curr2->next;
   while(curr1->next!=NULL && curr2!=NULL){
    if((curr1->data <=curr2->data) && (curr2->data<= next1->data)){
        curr1->next=curr2;
        next2=curr2->next;
        curr2->next=next1;
        curr1=curr2;
        curr2=next2;
         cout<<"hey1";
    }else{
        cout<<"hey1";
        curr1=next1;
        next1=next1->next;
    }
   }
   if(next1==NULL){
    curr1->next=curr2;
    return firsthead;
   }
}
Node*findmid(Node*head){
     Node*slow=head;
    Node*fast=head->next;
    while(fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
     return slow;
}
Node*mergesort(Node*head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    cout<<"hey";
    Node*mid=findmid(head);
    Node*first=head;
    Node*second=mid->next;
    mid->next=NULL;
    // sort these two list//
    first=mergesort(first);
    second=mergesort(second);
    // merge these two sorted list //
       if(first->data<second->data){
       Node*result= merge(first,second);
       return result;
       }else{
       Node*result= merge(second,first);
       return result;
       }
      
}
Node*insertATtail(Node*&tail,Node*&head,int d){
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
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
   
    Node*head=NULL;
    Node*tail=NULL;
     int d;
    int size;
    cout<<"enter the size of list : ";
    cin>>size;
    cout<<"enter the data ";
    for(int i=0;i<size;i++){
        cin>>d;
    insertATtail(tail,head,d);
    }
   Node*ans= mergesort(head);
   print(ans);
    return 0;
}