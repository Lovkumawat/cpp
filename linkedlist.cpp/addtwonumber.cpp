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
  void insertATtail(Node*&tail,Node*&head, int d){
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
    Node* reverse(Node*&head){
        Node* curr=head;
        Node*prev=NULL;
        Node*next1=NULL;
        while(curr!=NULL){
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        return prev;
    }

    Node*addnumber(Node*&first,Node*&second){
        Node*curr1=reverse(first);
        Node*curr2=reverse(second);
        int carry=0;
        int sum=0;
        int digit;
        Node*anshead=NULL;
        Node*anstail=NULL;
        while(curr1!=NULL && curr2!=NULL){
            sum=curr1->data+curr2->data+carry;
             digit=sum%10;
            insertATtail(anstail,anshead,digit);
               carry=sum/10;
            curr1=curr1->next;
             curr2=curr2->next;
        }

        while(curr1!=NULL){
             sum=curr1->data+carry;
            int digit=sum%10;
            carry=sum/10;
            insertATtail(anstail,anshead,digit);
             curr1=curr1->next;
        }
           while(curr2!=NULL){
             sum=curr2->data+carry;
            int digit=sum%10;
            insertATtail(anstail,anshead,digit);
             carry=sum/10;
             curr2=curr2->next;
        }
        while(carry!=0){
            sum=carry;
            digit=sum%10; 
             insertATtail(anstail,anshead,digit);
             carry=sum/10;
        }
       anshead=reverse(anshead);
        return anshead;
    }

    void print(Node*head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

int main(){
    Node*firsthead=NULL;
    Node*firsttail=NULL;
    Node*secondhead=NULL;
    Node*secondtail=NULL;
    int size1,size2,d;
    cout<<"enter the size of first linked list : ";
    cin>>size1;
    cout<<"enter the size of second list : ";
    cin>>size2;
    cout<<"enter the value in first list";
    for(int i=0;i<size1;i++){
        cin>>d;
      insertATtail(firsttail,firsthead, d);
    }
    cout<<"enter the value of second list ";
    for(int i=0;i<size2;i++){
        cin>>d;
        insertATtail(secondtail,secondhead,d);
    }
    cout<<" first list : ";
    print(firsthead);
    cout<<"second list : ";
   
    print(secondhead);
     cout<<endl;
   Node*answer= addnumber(firsthead,secondhead);
   print(answer);
    return 0;

}