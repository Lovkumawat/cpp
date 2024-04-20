#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class list{
    public:
    char data;
    list*next;
    list(char data){
        this->data=data;
        this->next=NULL;
    }
};

class Node{
    public:
    char data;
    Node*left;
    Node*right;
    Node(char data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void insertAttail(list*&head,list*&tail,char d){
    if(head==NULL){
        list*temp=new list(d);
        head=temp;
        tail=temp;
    }else{
        list*temp=new list(d);
        tail->next=temp;
        tail=temp;
    }
}
void print(list*head){
    list*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void buildtreelevelorder(Node*& root, list* head) {
    if (head == NULL) {
        return;
    }

    root = new Node(head->data);
    queue<Node*> q;
    q.push(root);
    head = head->next;

    while (!q.empty() && head != NULL) {
        Node* temp = q.front();
        q.pop();

        if (head != NULL) {
            int leftdata = head->data;
            temp->left = new Node(leftdata);
            q.push(temp->left);
            head = head->next;
            
        }

        if (head != NULL) {
            int rightdata = head->data;
            temp->right = new Node(rightdata);
            q.push(temp->right);
            head = head->next;
        }
    }
}
// void levelorder(Node*root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         Node*temp=q.front();
//         q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }

//         }else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }

//         }
//     }
// }

void spiralorder(Node*root){
    if(root==NULL){
        return ;
    }
    stack<Node*> s1;
    stack<Node*>s2;
    s1.push(root);
      while (!s1.empty() || !s2.empty()) {
    while(!s1.empty()){
        Node*temp=s1.top();
        cout<<temp->data<<" ";
        s1.pop();
        
        if(temp->right){
            s2.push(temp->right);
        }
        if(temp->left){
            s2.push(temp->left);
        }
    }
    while(!s2.empty()){
        Node*temp=s2.top();
        cout<<temp->data<<" ";
        s2.pop();
        if(temp->left){
            s1.push(temp->right);
        }
        if(temp->left){
            s1.push(temp->left);
        }
    }
      }
}
int main(){
    Node*root=NULL;
    list*head=NULL;
    list*tail=NULL;
    int size;
    cout<<"enter the size of list : ";
    cin>>size;
    char d;
    cout<<"enter the data : "<<endl;
    for(int i=0;i<size;i++){
        cin>>d;
        insertAttail(head,tail,d);
    }
    cout<<"list is : "<<endl;
    print(head);
    cout<<endl;
    cout<<"level order  : ";
   buildtreelevelorder(root,head);
//    levelorder(root);
cout<<"spiral order : ";
spiralorder(root);

}
      

    

    



      

    

    

