  // bool findduplicate(Node*root,map<int ,int>&mp){
        //     if(root==NULL){
        //         return ;
        //     }
        //     if(mp.find(root->data)!=mp.end()){
        //         return false;
        //     }
        //     mp[root->data]++;
        //     bool left=findduplicate(root->left,mp);
        //     bool right=findduplicate(root->right,mp);
        //     if(left&&right){
        //         return true;
        //     }else{
        //             return false;
        //         }
        //     }