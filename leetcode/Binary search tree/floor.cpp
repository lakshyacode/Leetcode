int findceil(TreeNode<int>* root,int key)
{
    int floor=-1;
    while(root)
    {
     if(root->data==key)
     {
         floor=root->data;
         return floor;
     }
     if(key>root->data)
     {
         floor=root->data;
         root=root->right;
     }
     else{
         root=root->right;
     }
    }
    return floor;
}