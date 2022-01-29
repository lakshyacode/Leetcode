struct Node* Delete(struct Node *root, int data)
{
    if(root==NULL)
    return root;
    else if(data<root->data) root->left=Delete(root->left,data);
    else if(data>root->right) root->right=Delete(root->right,data);
    else{
        // Case 1:NO child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        //Case 2:one child
        else if(root->left==NULL)
        {
            struct node *temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
		}
        // case 3:2 children
        else{
            struct Node *temp=findMin(root->right);
            root->right=temp->data;
            root->right=delete(root->right,temp->data);

        }
        return root;
    }
}