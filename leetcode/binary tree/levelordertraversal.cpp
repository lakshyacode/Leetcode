 vector<vector<int>> levelOrder(TreeNode* root)
 {
  vector<vector<int>>ans;
  if(root==NULL)
  return;
  queue<TreeNode*>q;
  q.push(root);
  while(!q.empty)
  {
      int size=q.size();
    vector<int>level;
    for(int i=0;i<size;i++)
    {
        TreeNode* node=q.front();
        q.pop();
        
    }

  }

 }