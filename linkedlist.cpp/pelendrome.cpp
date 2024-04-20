#include<iostream>
#include<vector>
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
// FIRST APPROACH //
//  bool checkpelendrome(Node*&head){
//     vector<int>ans;
//     Node*temp=head;
//     while(temp!=NULL){
//         ans.push_back(temp->data);
//         temp=temp->next;
//     }
//     int n=ans.size();
//     int s=0;
//     int e= n-1;
//     while(s<=e){
//         if(ans[s]!=ans[e]){
//             return false;
//         }
//         s++;
//         e--;
//     }
//     return true;
// }

// SECOND APPROACH //
Node*checkmid(Node*head){
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL || fast->next!=NULL){
      fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node*reverse(Node*head){
    Node*curr=head;
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

bool checkpelendrome(Node*head){
    // if(head==NULL||head->next==NULL){
    //     return true;
    // }
   // cout<<head->data;
    //cout<<head->next->next->data;
    Node*curr=head;
    Node* mid=checkmid(head);
    Node *temp=mid->next;
    mid->next=reverse(temp);
    Node*first=head;
    Node*second=mid->next;
    while(second!=NULL){
        if(first->data!=second->data){
            return false;
        }
        first=first->next;
        second=second->next;
    }
 return true;
}
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
    int size,d;
    cout<<"enter the size of list "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>d;
        insertATtail(tail,head,d);
    }
    print(head);
     if(checkpelendrome(head)==true){
        cout<<"palendrome ";
    }else{
        cout<<"not a palendrome";
    }
   return 0;
}