int maxpathsumUtil(Node* root,int& ans)
{
  if(root==NULL)
  {
      return 0;
  }
  int leftsum=maxpathsumUtil(root->left,ans);
  int rightsum=maxpathsumUtil(root->right,ans);

  int temp=max(max(leftsum,rightsum)+root->val,root->val);
  int ans=max(temp,leftsum+rightsum+root->val);

  return temp;
}
 int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        solve(root,res);
        return res;
    }