int maxDepth(Node* root)
{
    if(root==NULL)
    return 0;
    queue<Node*>qu;
  int depth=0;
  qu.push(root);
  while(!qu.empty())
  {
      int size=qu.size();
      for(int i=0;i<size;i++)
      {
          Node* root=qu.front();
          qu.pop();
          if(root->left)qu.push(root->left);
          if(root->right)qu.push(root->right);

      }
      depth++;
  }
  return depth;
}