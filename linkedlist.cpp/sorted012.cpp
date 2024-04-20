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
// APPROACH 1 //
Node*sorted012(Node*&head){
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    Node*curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            zerocount++;
        }else if(curr->data==1){
            onecount++;
        }else if(curr->data==2){
            twocount++;
        }
        curr=curr->next;
    }
    curr=head;
    while(curr!=NULL){
        if(zerocount!=0){
            curr->data=0;
            zerocount--;
        }else if(onecount!=0){
            curr->data=1;
            onecount--;

        }else if(twocount!=0){
             curr->data=2;
             twocount--;
        }
        curr=curr->next;
    }
   return  head;

}
 Node*insertATtail012(Node*&tail,Node*&curr){
    tail->next=curr;
    tail=curr;
 }
// APPROACH 2 //
Node*Sorted012(Node*head){
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;
      Node* onehead=new Node(-1);
    Node* onetail=onehead;
      Node* twohead=new Node(-1);
    Node* twotail=twohead;
    Node*curr=head;
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){                                                           // SORTED 0 1 2 //
            insertATtail012(zerotail,curr);

        }else if(value==1){
             insertATtail012(onetail,curr);

        }else if(value==2){
             insertATtail012(twotail,curr);
        }
        curr=curr->next;
    }
    // if one is empty //
    if(onehead->next==NULL){
        zerotail->next=twohead->next;
    }else{
        // of not empty //
        zerotail->next=onehead->next;
    }
       onetail->next=twohead->next;
        twotail->next=NULL;
    head=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
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
int d;
int size;
cout<<"enter the size of list : ";
cin>>size;
cout<<"enter the value : "<<endl;
for(int i=0;i<size;i++){
    cin>>d;
    insertATtail(tail,head,d);
}
cout<<"before remove sortlist : ";
print(head);
//Node*ans=sorted012(head);
Node*ans=Sorted012(head);
cout<<"after sortlist: ";
print(ans);
}

