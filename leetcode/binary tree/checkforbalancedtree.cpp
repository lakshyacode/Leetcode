bool isbalanced(Node* root)
{
    return dfsheoght(root)!=-1;
}
int dfsheight(Node* root)
{
    if(root==NULL)
    return 0;
    int lh=dfsheight(root->left);
    if(lh==-1)return -1;
    int rh=dfsheight(root->right);
    if(rh==-1)return -1;
    if(abs(lh-rh)>1)return -1;
    return max(lh,rh)+1;
}