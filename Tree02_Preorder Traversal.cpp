

/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
    vector <int> ans;
    if(root == NULL)
        return ans;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
    return ans;
}
