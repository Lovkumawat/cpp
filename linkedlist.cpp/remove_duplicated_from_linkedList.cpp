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
Node*delete_duplicate(Node*&head){                       // DELETE DUPLICATE NODE //
    if(head==NULL)
        return NULL;
    Node*curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL)&&(curr->data==curr->next->data)){
            Node*next_next=curr->next->next;
            Node*deletednode=curr->next;
            delete (deletednode);
            curr->next=next_next;
        }else{
            curr=curr->next;
        }
    }
    return head;
}
Node*delete_duplicate2(Node*&head){
    if(head==NULL)
    return NULL;
    Node*curr=head;
      Node* temp;
    while(curr!=NULL){
       temp=curr->next;
         Node*prev=temp;              // deleteed duplicated from unsorted list //
        while(temp!=NULL){
            if(temp->data!=curr->data){
                prev=temp;
            temp=temp->next;
            }else{
                  
                prev->next=temp->next;
                delete temp;
                temp=prev->next;
            }
        }
        curr=curr->next;
    }
    return head;
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
    Node*tail=NULL;
    int size;
    cout<<"enter the size of list : "<<endl;
    cin>>size;
    int element;
    cout<<"enter the element : "<<endl;
    for(int i=0;i<size;i++){
        cin>>element;
        insertATtail(tail,head,element);
    }
    cout<<"before remove duplicate : ";
    print(head);
    cout<<endl;
   // delete_duplicate2(head);
    Node*ans=delete_duplicate2(head);
    cout<<"after remove duplicate : ";
    print(ans);
    return 0;
}
    