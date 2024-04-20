#include<iostream>
using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;

//     }
  
// };
// void insertAThead(Node*&head,Node*&tail,int d){
//     if(head==NULL){
//         Node*temp=new Node(d);
//         head=temp;
//         tail=temp;
//     }else{
//         Node*temp=new Node(d);
//         head->next=temp;
//         head=temp;
//     }
// }
//   void insertATtail(Node*&tail,Node*&head,int d){
//         if(tail==NULL){
//             Node*temp=new Node(d);
//             tail=temp;
//             head=temp;
//         }else{
//             Node*temp=new Node(d);
//             tail->next=temp;
//             tail=temp;
            
//         }
//     }
//     void display(Node*&head){
//         Node*temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }
//     void insertATposition(Node*&head,Node*&tail,int position,int d){
//         int count=1;
//         Node*curr=head;
//         if(position==1){
//             insertAThead(head,tail,d);
//             return;
//         }
//         while(count<position-1){
//             curr=curr->next;
//             count++;
//         }
//         if(curr->next==NULL){
//             insertATtail(tail,head,d);
//         }else{
//             Node*temp=new Node(d);
//             temp->next=curr->next;
//             curr->next=temp;
//         }
//     }
//     void deletenode(Node*&head,int position){
//         Node*curr=head;
//         Node*prev=NULL;
//         if(position==1){
//             head=head->next;
//             curr->next=NULL;
//             delete curr;
//             return;

//         }else{
//             int count=1;
//             while(count<position){
//                 prev=curr;
//                 curr=curr->next;
//                 count++;
//             }
//             prev->next=curr->next;
//             curr->next=NULL;
//             delete(curr);
//         }

//     }

// int main(){
//     Node*head=NULL;
//     Node*tail=NULL;
//     int size;
//     cout<<"enter the size of list : "<<endl;
//     cin>>size;
//     int d;
//     cout<<"enter the value in list : "<<endl;
//     for(int i=0;i<size;i++){
//         cin>>d;
//         insertATtail(tail,head,d);
//     }
//     cout<<"list is : "<<endl;
//     display(head);
//     int position;
//     cout<<"enter the position : ";
//     cin>>position;
//     int data;
//     cout<<"enter data : ";
//     cin>>data;
//     insertATposition(head,tail,position,data);
//     cout<<"new list is : "<<endl;
//     display(head);
//     int dp;
//     cout<<"enter the delete position : "<<endl;
//     cin>>dp;
//     deletenode(head,dp);
//     cout<<"list after delete : "<<endl;
//     display(head);
//     return 0;
// }
// class Node{
//     public:
//     Node*prev;
//     Node*next;
//     int data;
//     Node(int data){
//         this->prev=NULL;
//         this->next=NULL;
//         this->data=data;
//     }
// };
// void insertATtail(Node*&tail,Node*&head,int d){
//     if(tail==NULL){
//         Node*temp=new Node(d);
//         head=temp;
//         tail=temp;
//     }else{
//         Node*temp=new Node(d);
//         tail->next=temp;
//         temp->prev=tail;
//         tail=temp;
//     }
// }
// void display(Node*&head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// void insertATposition(Node*&tail,Node*&head,int position,int d){
//     if(position==1){
//         Node*temp=new Node(d);
//         temp->next=head;
//         head=temp;
//     }else{
//         Node*curr=head;
//         int count=1;
//         while(count<position-1){
//             curr=curr->next;
//             count++;
//         }
//         Node*temp=new Node(d);
//         temp->next=curr->next;
//         curr->next->prev=temp;
//         curr->next=temp;
//         temp->prev=curr;

//     }

// }
// void deletenode(Node*&head,int position){
//     Node*curr=head;
//     Node*prev=NULL;
//     if(position==1){
//         head=head->next;
//         head->prev=NULL;
//         curr->next=NULL;
//         delete curr;

//     }else{
//         int count=1;
//         while(count<position){
//             prev=curr;
//             curr=curr->next;
//             count++;

//         }
//         prev->next=curr->next;
//         curr->next->prev=prev;
//         curr->next=NULL;
//         curr->prev=NULL;
//         delete curr;
//     }


// }

// int main(){
//     Node*head=NULL;
//     Node*tail=NULL;
//     int size;
//     cout<<"enter the size of list : "<<endl;
//     cin>>size;
//     cout<<"enter the element in list :  "<<endl;
//     int d;
//     for(int i=0;i<size;i++){
//         cin>>d;
//         insertATtail(tail,head,d);
//     }
//     display(head);
//     int position;
//     int data;
//     cout<<"enter the position : "<<endl;
//     cin>>position;
//     cout<<"enter data : "<<endl;
//     cin>>d;
//     insertATposition(tail,head,position,d);
//     cout<<"new list is : "<<endl;
//      display(head);
//      int dp;
//      cout<<"enter delete position : "<<endl;
//      cin>>dp;
//      deletenode(head,dp);
//      cout<<"new list: "<<endl;
//      display(head);
// }
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int data){
//         this-> data=data;
//         this->next=NULL;
//     }
// };
// void insertATnode(Node*&tail,int d ){
//     if(tail==NULL){
//         Node*temp=new Node(d);
//         tail=temp;
//         tail->next=tail;
//     }else{
//         Node*curr=tail;
//         while(curr->next!=tail){
//             curr=curr->next;
//         }
//            Node*temp=new Node(d);
//            curr->next=temp;
//            temp->next=tail;
//     }
// }
// void display(Node*&tail){
//     Node*curr=tail;
//     while(curr->next!=tail){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
//         cout<<curr->data<<" ";
// }
// void insertATposition(Node*&tail,int position,int d){
//     if(position==1){

//     }


// }

// int main(){
//       Node*tail=NULL;
//     int size;
//     cout<<"enter the size of list : "<<endl;
//     cin>>size;
//     cout<<"enter the element in list :  "<<endl;
//     int d;
//     for(int i=0;i<size;i++){
//         cin>>d;
//         insertATnode(tail,d);
//     }
//     display(tail);
//     return 0;
// }
// class stack{
//     public:
//     int size;
//     int *arr;
//     int top;
//     stack(int size){
//         this->size=size;
//         arr=new int [size];
//         top=-1;
//     }
//     void push(int data){
//         if(top==size-1){
//             cout<<"tack is overflow "<<endl;
//         }else{
//             top++;
//             arr[top]=data;
//         }
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"stack is empty";
//         }else{
//             top--;
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
//     void display(){
//         while(top==-1){
//             cout<<arr[top];
//             top--;
//         }
//     }

// };
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// class stack{
//     public:
//     Node*top;
//     stack(){
//         top=NULL;
//     }
//     void push(int data){
//         Node*temp=new Node(data);
//         if(!temp){
//             cout<<"stack is overflow";
//             exit(1);
//         }
//         temp->next=top;
//         top=temp;
//     }
//     void pop(){
//         if(top==NULL){
//             cout<<"stack is underflow";
//             exit(1);
//         }else{
//             Node*temp;
//             top=temp;
//             top=top->next;
//             free(temp);
//         }
//     }
//     int peek(){
//         if(top==NULL){
//             cout<<"stack is underflow";
//             exit(1);
//         }else{
//             return top->data;
//         }
//     }
//     bool isempty(){
//         if(top==NULL){
//             return true;
//         }else{
//             return false;
//         }
//     }
//     void dispaly(){
//         Node*temp;
//         if(top==NULL){
//             cout<<"stack is underflow";
//             exit(1);
//         }else{
//             top=temp;
//             while(temp!=NULL){
//                 cout<<temp->data<<" ";
//                 temp=temp->next;
//             }
//         }
//     }
// };
// class queue{
//     public:
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     queue(int size){

//         this->size=size;
//         arr=new int[size];
//         front=-1;
//         rear=-1;
//     }
// void push(int d){
//     if(rear==size-1){
//         cout<<"queue is overflow";
//         return;

//     }else if(front==-1&&rear==-1){
//             front=0;
//             rear=0;
//             arr[rear]=d;

//         }else{
//             rear++;
//             arr[rear]=d;
//         }
// }
// int pop(){
//     int ans;
//     if(front==-1&&rear==-1){
//         cout<<"queue is empty";
//         return -1;
//     }else if(front==rear){
//         ans=arr[front];
//         front=-1;
//         rear=-1;
//     }else{
      
//         ans=arr[front];
//           front++;
//     }
//     return ans;
// }
// bool isempty(){
//     if(front==rear){
//         return true;
//     }else{
//         return false;
//     }
// }
// void display(){
//     while(front!=rear+1){
//     cout<<arr[front]<<" ";
//     front++;
//     }
//     }
// };
class Queue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    Queue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
        
    }
    void push(int d){
        if(front==0 &&rear==size-1||rear==(front-1)%(size-1)){
            cout<<"stack is overflow";
            return;
        }else if(front==-1&&rear==-1){
            front=0;
            rear=0;
            arr[rear]=d;
        }else if(rear==size-1&& front!=0){
            rear=0;
            arr[rear]=d;
        }else{
            rear++;
            arr[rear]=d;
        }

    }
    int pop(){
        if(front==-1){
            //cout<<"Queue is empty "<<endl;
            return -1;
        }
        int ans=arr[front];
         if(front==rear){
            front=rear=-1;
                           // only single emenet is present
        }else if( front ==size-1){

            front=0;// to maintain cycle nature
        }else{
             front++;   //normal flow
        }
         return ans;
    }

        
        
    }
};