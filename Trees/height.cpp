int height(struct Node* node)
{
    if(node==NULL){
        return 0;
    }
    else{
        int temp= height(node->left)+1;
        int temp1=height(node->right)+1;
        if(temp>temp1){
            return temp;
        }
        return temp1;
    }
}


int height(struct Node* node)
{
    if(node==NULL){
        return 0;
    }
    else{
        return max(height(node->left),height(node->right))+1;
    }
}
