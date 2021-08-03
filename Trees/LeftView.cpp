vector<int> res;
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
        if(res.size()<h){
            res.push_back(temp->data);
        }
    }
    else{
        data(temp->left,level-1,h);
        data(temp->right,level-1,h);
    }
}
vector<int> leftView(Node *root)
{
   // Your code here
   int h=maxDepth(root);
    for(int i=0; i<=h; i++){
        data(root,i,i+1);
    }
    return res;
}
