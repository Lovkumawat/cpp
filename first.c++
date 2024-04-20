#include<iostream>
#include<queue>

using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data =data;
        this->left=NULL;
        this->right=NULL;
    }

};
Node*buildtree(Node*root){
    cout<<"enter the data : ";
    int data;
    cin>>data;
   root =new Node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for inserting in left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the data for inserting in right of  "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
void levelorderTraversal(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

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
    return ;

}
int main(){
    Node*root=NULL;
    root=buildtree(root);
    levelorderTraversal(root);
    return 0;
}

