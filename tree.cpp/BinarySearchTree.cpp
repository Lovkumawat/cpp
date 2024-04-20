#include<iostream>
#include<queue>
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
Node*BST(Node*root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
          root->right=BST(root->right,data);
      
        }else{
              root->left=BST(root->left,data);
          
        }
        return root;
    }

void input(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=BST(root,data);
        cin>>data;
    }
}
void levelordertraverse(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    cout<<endl;
    
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
             cout<<temp->data<<" ";
             if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}
Node*minval(Node*root){
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node*maxval(Node*root){
    Node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
Node*deletenode(Node*root,int val){
    if(root==NULL){
        return root;
    }
    // case 1---0 child //
    if(root->data==val){
        if(root->left==NULL&&root->right==NULL){
            delete root;
            return NULL;
        }
    // case 2--->1 child//
    if(root->data==val){
        if(root->left==NULL&&root->right!=NULL){
            Node*temp=root->right;
            delete root;
            return temp;
        }else{
            if(root->left!=NULL&&root->right==NULL){
            Node*temp=root->left;;
            delete root;
            return temp;
            }
        }
    } 
    // case 3---> 2 child //
    if(root->left!=NULL&&root->right!=NULL){
        int mini=minval(root->right)->data;
        root->data=mini;
       root->right= deletenode(root->right,mini);
       return root;
    }


      }else if(val<root->data){
       root->left= deletenode(root->left,val);
       return root;
    }else{
       root->right= deletenode(root->right,val);
       return root;
    }
}
int main(){
    Node*root=NULL;
    cout<<"enter data in tree : "<<endl;
    input(root);
    cout<<endl;
    cout<<"print tree :"<<endl;
    int val;
    cout<<"enter the value of node which you want to delete  : "<<endl;
    cin>>val;
    deletenode(root,val);
    levelordertraverse(root);
    return 0;

}