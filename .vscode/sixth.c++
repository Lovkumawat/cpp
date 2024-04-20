#include<iostream>
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
    if(data<=root->data){
        root->left=BST(root->left,data);
    }else{
        root->right=BST(root->right,data);
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
Node*min(Node*root){
    Node*temp=root;
    while(temp!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node*deleteNode(Node*root,int target){
    if(root==NULL){
        return root;
    }
    // leaf Node//
    if(root->data==target){
        if(root->left==NULL&&root->right==NULL&&root->data==target){
            delete root;
            return NULL;

        }
        if(root->data==target){
            if(root->left!=NULL&&root->right==NULL&&root->data==target){
                Node*temp=root->left;
                delete root;
                return temp;
            }else if(root->left==NULL&&root->right!=NULL&&root->data==target){
                Node*temp=root->right;
                delete root;
                return temp;
            }
            if(root->left==NULL&&root->right==NULL){
                int mini=min(root->right)->data;
                root->data=mini;
                Node*temp=deleteNode(root->right,mini);
                return root;
            }
        }
        
    }else if(target<root->data){
           root->left= deleteNode(root->left,target);
           return root;
        }else{
           root->right= deleteNode(root->right,target);
           return root;
        }

    }
// A. //
void inorder(Node*root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
int main(){
    Node*root=NULL;
    input(root);
    cout<<"inordertrevarsal : "<<endl;
    inorder(root);
    int target;
    cout<<"enter the target : "<<endl;
    cin>>target;
    deleteNode(root,target);
    cout<<"after delete "<<target<<" from BST : "<<endl;
    inorder(root);
}




