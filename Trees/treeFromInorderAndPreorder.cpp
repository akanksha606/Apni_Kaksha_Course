TreeNode* buildT(vector<int> preorder, vector<int> inorder,int start,int end){
        if(start>end)
            return NULL;
        static int idx=0;
        int curr=preorder[idx];
        idx++;
        TreeNode* node =new TreeNode(curr);
        if(start==end)
            return node;
        
        int pos=search(inorder, start, end, curr);
        node->left=buildT(preorder,inorder, start, pos-1 );
        node->right=buildT(preorder,inorder, pos+1, end );
       
    }
    int search(vector<int> inorder, int start, int end, int curr){
        int i;
        for(i=start; i<=end; i++){
            if(inorder[i]==curr)
                return i;
        }
        return -1;
    }
    
    
