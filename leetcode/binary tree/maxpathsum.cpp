int maxpathsumUtil(Node* root,int& ans)
{
  if(root==NULL)
  {
      return 0;
  }
  int left= maxpathsumUtil(root->left,ans);
  int right= maxpathsumUtil(root->right,ans);
  int Nodemax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
    ans=max(ans,Nodemax);
    int singlepathsum=max(root->data,max(root->data+left,root->data+right);
    return singlepathsum;
}
int maxpathsum(Node* root)
{
    int ans=0;
    maxpathsum(root,ans);
    return ans;
}