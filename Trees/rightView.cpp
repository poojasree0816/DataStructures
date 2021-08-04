class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    int maxh=0;
    vector<int> res;
    vector<int> ans;
    vector<int> x;
    vector<int> rightView(Node *root)
    {
        int h=maxDepth(root);
        for(int i=0; i<=h; i++){
            data(root,i,i+1);
        }
        getIndex(res,-1);
        for(int i=1; i<x.size(); i++){
            int p=x[i];
            ans.push_back(res[p-1]);
        }
        ans.push_back(res[res.size()-1]);
        return ans;
    }
    void getIndex(vector<int> s, int c)
    {
        for (int i = 0; i != s.size(); i++)
        {
            if (s[i] == c)
            {
                x.push_back(i);
            }
        }
    }
    
    int maxDepth(Node* node){
        if (node == NULL){
            return 0; 
        }
        else{
            int lDepth = maxDepth(node->left);
            int rDepth = maxDepth(node->right);
     
            /* use the larger one */
            if (lDepth > rDepth)
                return(lDepth + 1);
            else return(rDepth + 1);
        }
    }
    void data(Node* temp,int level,int h){
        if(temp==NULL){
            return;
        }
        else if(level==0){
            if(h!=maxh){
                res.push_back(-1);
                maxh=h;
            }
            res.push_back(temp->data);
            /*cout<<"h"<<h<<endl;
            cout<<"m"<<maxh<<endl;
            cout<<"t"<<temp->data<<endl;*/
            
        }
        else{
            data(temp->left,level-1,h);
            data(temp->right,level-1,h);
        }
    }
};
