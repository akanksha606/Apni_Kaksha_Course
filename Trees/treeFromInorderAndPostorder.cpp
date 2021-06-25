TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
         return buildT(postorder, inorder, 0, inorder.size()-1);
    }
    
    TreeNode* buildT(vector<int> postorder, vector<int> inorder,int start,int end){
        static int idx=postorder.size()-1;
        int curr=postorder[idx];
        idx--;
        TreeNode* node =new TreeNode(curr);
        if(start==end)
            return node;
        
        int pos=search(inorder, start, end, curr);
        node->right=buildT(postorder,inorder, pos+1, end );
        node->left=buildT(postorder,inorder, start, pos-1 );
        
        return node;
       
    }
    int search(vector<int> inorder, int start, int end, int curr){
        int i;
        for(i=start; i<=end; i++){
            if(inorder[i]==curr)
                return i;
        }
        return -1;
    }
    
    
};
   