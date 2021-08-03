vector<int> v1;
int maxDepth(Node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        return(max(lDepth,rDepth)+1);
    }
}
void data(Node* temp,int level,int h){
    if(temp==NULL){
        return;
    }
    else if(level==h){
        v1.push_back(temp->data);
    }
    else{
        data(temp->left,level+1,h);
        data(temp->right,level+1,h);
    }
}

vector<int> reverseLevelOrder(Node *root)
{
    int h=maxDepth(root);
    for(int i = h; i>=0; i--){
        data(root,0,i);
    }
    return v1;
}
