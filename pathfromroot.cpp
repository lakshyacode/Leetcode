bool getpath(TreeNode* root,vector<int>&arr,int x)
{
    if(!root)
    return false;
    arr.push_back(root->val);
    if(root->val==x)
    return true;
    if(getpath(root->left,arr,x)||getpath(root->right,arr,x))
    return true;

    arr.pop_back();return false
}