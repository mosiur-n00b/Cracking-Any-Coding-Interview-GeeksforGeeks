// User function Template for C

void insert_key(struct Node *root, int key) {
    // your code here
    struct Node* prev = NULL;
    while(root != NULL)
    {
        prev=root;
        if(key == root->data)
            return;
        else if(key < root->data)
            root=root->left;
        else
            root=root->right;
    }
    struct Node* now = createNewNode(key);
    if(key < prev->data) prev->left=now;
    else prev->right=now;
}
