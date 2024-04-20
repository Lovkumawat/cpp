#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
          this->  next=NULL;
        }
        cout<<"memory is free for node with with data "<<value;
            cout<<endl;
    }

};

void insertAThead(Node*&head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertATtail(Node*&tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertAtposition(Node*&head,Node*&tail,int position,int d){
    Node*temp=head;
    int count =1;
    if(position==1){
        insertAThead(head,d);
        return ;

    }
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertATtail(tail,d);
    }else{
    Node*curr=new Node(d);
    curr->next=temp->next;
    temp->next=curr;
    }
}
void deletenode(Node*&head,int position){
    // for first position //
    if(position==1){
        Node*temp=head;
      //  head=temp->next;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
    // for any position and last position//       // DELETE NODE//
    Node*curr=head;
    Node*prev=NULL;
    int count =1;
    while(count<position){
        prev=curr;
        curr=curr->next;
        count++;
    }
    prev->next=curr->next;
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
    Node*Node1=new Node(10);
    Node*head=Node1;
    Node*tail=Node1;
    insertAThead(head,12);
    // insertATtail(tail,12);
    //  insertATtail(tail,15);
    //   insertATtail(tail,18);
    //   insertAtposition(head,tail,5,21);
    //    cout<<"head is :"<<head->data<<endl;
    // cout<<"tail is : "<<tail->data<<endl;
    //   //deletenode(head,1);
        
    printdata(head);

}
