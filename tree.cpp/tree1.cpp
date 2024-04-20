#include<iostream>
#include<queue>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
// NON RECURSIVE //
void buildfromlevelorder(Node*&root){
     queue<Node*>q;
    int data;
    cout<<"enter the data in root  : "<<endl;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        int leftdata,rightdata;
        Node*temp=q.front();
        q.pop();

        cout<<"enter  the data in left node of  :"<<temp->data<<endl;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new Node(leftdata);
            q.push(temp->left);
        }else{
                temp->left=NULL;
          }

         cout<<"enter  the data in right node of  :"<<temp->data<<endl;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }else{
            temp->right=NULL;
     }

    }
}
// RECURSIVE//
Node* buildtree(Node*root){
    int data;
    cout<<"enter data : "<<endl;
    cin>>data;
      root=new Node(data); 
    if(data==-1){
        return NULL ;
    }
      
    
    cout<<"enter the data in left of "<<root->data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the data inright of : "<<root->data<<endl;
    root->right=buildtree(root->right);
    return root;
}

 void levelordertreversal(Node*root){
   queue<Node*>q;
    q.push(root);
  
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
              cout<<temp->data<<" ";
             if(temp->left){
          q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
         void search(Node*curr,Node*parent){
            if(curr==NULL){
                return ;
            }
            if(curr->left==NULL&&curr->right==NULL){
                if(parent->left==curr){
                     parent->left=NULL;
                     parent->right=NULL;
                }
                delete (curr);
                return;
            }
                   parent=curr;
                  search(curr->left,parent);
                  search(curr->right,parent);
        }
        void deletenodeleaf(Node*root){
            if(root==NULL){
                return;
            }
            Node*curr=root;
            Node*parent=NULL;
            search(curr,parent);

         
        }
      
      
   

    int main(){
        Node*root=NULL;
       // buildfromlevelorder(root);
          root=buildtree(root);
         cout<<endl;
        // deletenodeleaf(root);
        levelordertreversal(root);
        return 0 ;
    }



// Node*buildtree(Node*root){
//     int data;
//     cout<<"enter the data : "<<endl;
//     cin>>data;
//     root=new Node(data);
//     if(data==-1){
//         return NULL;
//     }
//     cout<<"enter data for inserting in left of : "<<data<<endl;
//     root->left=buildtree(root->left);
//     cout<<"enter data for inserting in right of : "<<data<<endl;
//     root->right=buildtree(root->right);
//     return root;
// }

// void levelordertraverse(Node*root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);
//     cout<<endl;
    
//     while(!q.empty()){
//         Node*temp=q.front();
//         q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }else{
//              cout<<temp->data<<" ";
//              if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//         }
//     }
// }

// // INORDER TREVERSAL//
// // void inorder(Node*root){
// //     if(root==NULL){
// //         return;
// //     }
// //     inorder(root->left);
// //     cout<<root->data<<" ";
// //     inorder(root->right);
// // }

// // PRE ORDER TREVERSAL //
// // void preorder(Node*root){
// //     if(root==NULL){
// //         return;
// //     }
// //     cout<<root->data;
// //     preorder(root->left);
// //     preorder(root->right);
// // }

// // POSTORDER TREVARSAL//
// // void postorder(Node*root){
// //     if(root==NULL){
// //         return;
// //     }
// //     postorder(root->left);
// //     postorder(root->right);
// //     cout<<root->data<<" ";
// // }
// bool findduplicate(Node*root,map<int,int>&mp)
// {
//     if(root==NULL)
//     {
//         return true;
//     }
//     if(mp.find(root->data)!=mp.end())
//     {
//         return false;
//     }
//     mp[root->data]++;
//     bool left=findduplicate(root->left,mp);
//     cout<<left<<endl;

//     bool right=findduplicate(root->right,mp);
//     if(left&&right)
//     {
//         return true;
//     }
//     else
//     return false;
// }

// int main(){
//     Node*root=NULL;
//     root=buildtree(root);
//     cout<<"printing the level order tracersal output : ";
//     cout<<endl;
//     levelordertraverse(root);
//     map<int,int>mp;
//     bool check=findduplicate(root,mp);
//     if(check)
//     {
//         cout<<"there is no duplicate"<<endl;
//     }
//     else
//     cout<<"there is duplicate"<<endl;
//     return 0;
// }
// using array//
// char tree[10];
// int root(char key){
//     if(tree[0]!='\0'){
//         cout<<"tree already had root";
//     }else{
//         tree[0]=key;
//     }
//     return 0;
// }
// int set_left(char key,int parent){
//     if(tree[parent]=='\0'){
//         cout<<"can't set child at"<<(parent*2)+1<<",no parent found";
//     }else{
//         tree[(parent*2)+1]=key;
//     }
//     return 0;
// }
// int set_right(char key,int parent){
//     if(tree[parent]=='\0'){
//         cout<<"can't set child at"<<(parent*2)+2<<",no parent found";
//     }else{
//         tree[(parent*2)+2]=key;
//     }
//     return 0;
// }
// int print_tree(){
//     cout<<endl;
//     for(int i=0;i<10;i++){
//         if(tree[i]!='\0'){
//             cout<<tree[i];
//         }else{
//             cout<<"-";
//         }
//     }
// }
// int main(){
//     root('A');
//     set_left('B',0);
//     set_right('C',0);
//     set_left('D', 1);
//   set_right('E', 1);
//   set_right('F', 2);
//   print_tree();
//   return 0;
// }




//  NON RECURSIVE //
// void buildfromlevelorder(Node*&root){
//      queue<Node*>q;
//     int data;
//     cout<<"enter the data in root  : "<<endl;
//     cin>>data;
//     root = new Node(data);
//     q.push(root);

//     while(!q.empty()){
//         int leftdata,rightdata;
//         Node*temp=q.front();
//         q.pop();

//         cout<<"enter  the data in left node of  :"<<temp->data<<endl;
//         cin>>leftdata;
//         if(leftdata!=-1){
//             temp->left=new Node(leftdata);
//             q.push(temp->left);
//         }else{
                //temp->left=NULL;
//           }

//          cout<<"enter  the data in right node of  :"<<temp->data<<endl;
//         cin>>rightdata;
//         if(rightdata!=-1){
//             temp->right=new Node(rightdata);
//             q.push(temp->right);
//         }else{
            //temp->right=NULL;
//      }
//     }
// }
//  void levelordertreversal(Node*root){
//    queue<Node*>q;
//     q.push(root);
  
//     while(!q.empty()){
//         Node*temp=q.front();
//         q.pop();
//               cout<<temp->data<<" ";
//              if(temp->left){
//           q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//         }
//     }



