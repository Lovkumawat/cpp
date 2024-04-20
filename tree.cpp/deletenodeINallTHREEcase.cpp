


// DELETE LEAF NODE for given item//
    //  void search(Node*curr,Node*parent,int item){
    //         if(curr==NULL){
    //             return ;
    //         }
    //         if(curr->data==item){
    //             if(parent->left==curr){
    //                  parent->left=NULL;

    //             }else{
    //                 parent->right=NULL;
    //             }
    //             delete (curr);
    //             return;
    //         }
    //                parent=curr;
    //               search(curr->left,parent,item);
    //               search(curr->right,parent,item);
    //     }
    //     void deletenodeleaf(Node*root,int item){
    //         if(root==NULL){
    //             return;
    //         }
    //         Node*curr=root;
    //         Node*parent=NULL;
    //         search(curr,parent,item);

         
    //     }

    

    // delete all leaf node//
    //  void search(Node*curr,Node*parent){
    //         if(curr==NULL){
    //             return ;
    //         }
    //         if(curr->left==NULL&&curr->right==NULL){
    //             if(parent->left==curr){
    //                  parent->left=NULL;
    //                  parent->right=NULL;
    //             }
    //             delete (curr);
    //             return;
    //         }
    //                parent=curr;
    //               search(curr->left,parent);
    //               search(curr->right,parent);
    //     }
    //     void deletenodeleaf(Node*root){
    //         if(root==NULL){
    //             return;
    //         }
    //         Node*curr=root;
    //         Node*parent=NULL;
    //         search(curr,parent);

         
    //     }