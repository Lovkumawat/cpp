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
    Node*mergesort(Node*&firsthead,Node*&secondhead){   //merge two sorted linkedlist //
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
                
                cout<<"hey";
            }else{
                cout<<"hey2";
                curr1=next1;
                next1=next1->next;
            }
        }
        if(next1==NULL){
            
            curr1->next=curr2;
            return firsthead;
        }
       
      
    }
    //  method 2  easy first preference//
    //   Node*head=new Node(-1);
    // Node*temp=head;
    // Node*curr1=head1;
    // Node*curr2=head2;
    // while(curr1!=NULL&&curr2!=NULL){
    //     if(curr1->data<curr2->data){
    //         temp->next=curr1;
    //         curr1=curr1->next;
    //     }else{
    //          temp->next=curr2;
    //         curr2=curr2->next;
    //     }
    //     temp=temp->next;
    // }
    // while(curr1!=NULL){
    //    temp->next=curr1;
    //    curr1=curr1->next;
    //    temp=temp->next;
    // }
    // while(curr2!=NULL){
    //       temp->next=curr2;
    //    curr2=curr2->next;
    //    temp=temp->next;
    // }
    // return head->next;

    void check(Node*&firsthead,Node*&secondhead){
        if(firsthead->data <= secondhead->data){
            mergesort(firsthead,secondhead);
        }else{
               mergesort(secondhead,firsthead);
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
    Node*firsthead=NULL;
    Node*firsttail=NULL;
    Node*secondhead=NULL;
    Node*secondtail=NULL;
    int size1,size2;
    cout<<"enter the size of first linkedlist "<<endl;
    cin>>size1;
    cout<<"enter the size of second linkedlist "<<endl;
    cin>>size2;
    int d;
    cout<<"enter the value of first linkedlist "<<endl;
    for(int i=0;i<size1;i++){
        cin>>d;
           insertATtail(firsttail,firsthead,d);
    }
    cout<<"enter the value of second linkedlist "<<endl;
     for(int i=0;i<size2;i++){
        cin>>d;
           insertATtail(secondtail,secondhead,d);
    }
    Node*ans=mergesort(firsthead,secondhead);
    print(ans);
}