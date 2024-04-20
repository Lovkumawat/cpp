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
void insertAtnode(Node*&tail,int element,int d){     // circular linkedlist //
    // when list is empty //
    if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }else{
    // non- empty list //
    Node*curr=tail;
    while(curr->data!=element){
        curr=curr->next;
    }
    Node*temp=new Node(d);
    curr->next=temp;
    temp->next=tail;
   // tail=temp;
    // temp->next=curr->next;
    // curr->next=temp;
    }
}
// void insertATtail(Node*&tail,int d){
//     if(tail==NULL){
//         Node*temp=new Node(d);
//         tail=temp;
//         temp->next=tail;                      WE ALSO USEFUNCTION TO INSERT ELEMENT IN LINKED LIST 
//     }else{
//         Node*curr=tail;
//         while(curr->next!=tail){
//             curr=curr->next;
//         }
//         Node*temp=new Node(d);
//         curr->next=temp;
//         temp->next=tail;
//     }
// }
void print(Node*&tail){
    Node*temp=tail;
while(tail->next!=temp){
    cout<<tail->data<<" ";
    tail=tail->next;
}
cout<<tail->data;
}
bool iscircular(Node*&head){
    if(head==NULL){
        return true;
    }
    Node*temp=head->next;

    while(temp!=NULL&&temp!=head){
        temp=temp->next;

    }
    if(temp==head){
        return true;
    }                                              // CHECK  LIST IS CIRCULAR //
    if(temp==NULL){
        return false;
    }
}
int main(){
    Node*tail=NULL;
    int size;
    cout<<"enter the size of list : ";
    cin>>size;
    int d;
    int element;
    for(int i=0;i<size;i++){
        cout<<"enter data "<<endl;
        cin>>d;
        insertAtnode(tail,element,d);
        cout<<"enter the element"<<endl;
        cin>>element;
    }
    print(tail);
    if(iscircular(tail)){
        cout<<"list is circular";
    }else{
        cout<<"list is not circular";
    }
}