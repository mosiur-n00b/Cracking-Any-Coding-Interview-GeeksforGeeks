// User function Template for C

// Function to search a struct node in BST.
bool search(struct Node* root, int x) {
    if(root==NULL)
        return false;
    if(root->data == x)
        return true;
    if(root->data > x)
        return search(root->left, x);
    else
        return search(root->right, x);
}
