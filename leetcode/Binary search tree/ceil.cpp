int findceil(TreeNode<int>* root,int key)
{
  int ceil=-1;
  while(root)
  {
      if(root->data==key)
      {
          ceil=root->data;
          return ceil;
      }
      if(key<root->data)
      {
          root->root->left;
      }
      else{
          ceil=root->data;
          root=root->right
      }
  }
  return ceil;
}