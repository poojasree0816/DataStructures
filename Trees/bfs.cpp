class Solution
{
    public:
    vector<int> res;
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        
        int h=maxDepth(node);
        for(int i=0; i<=h; i++){
            //vector<int> d=data(node,i);
            //res.insert( res.end(), d.begin(), d.end() );
            data(node,i);
        }
        return res;
        
    }
    void data(Node* temp,int level){
        if(temp==NULL){
            return;
        }
        else if(level==0){
            res.push_back(temp->data);
        }
        else{
            data(temp->left,level-1);
            data(temp->right,level-1);
        }
    }
    int maxDepth(Node* node)
    {
        if (node == NULL)
            return 0;
        else
        {
            /* compute the depth of each subtree */
            int lDepth = maxDepth(node->left);
            int rDepth = maxDepth(node->right);
     
            /* use the larger one */
            if (lDepth > rDepth)
                return(lDepth + 1);
            else return(rDepth + 1);
        }
    }
};
