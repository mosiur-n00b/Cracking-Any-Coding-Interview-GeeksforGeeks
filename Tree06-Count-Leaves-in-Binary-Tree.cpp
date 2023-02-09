

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
  // Your code here
    if(root == NULL)
        return 0;
    queue <Node*> q;
    q.push(root);
    int cnt=0;
    while(!q.empty())
    {
        Node* curr = q.front();
            q.pop();
            if(curr->left == NULL && curr->right == NULL)
            {
                cnt++;
            }
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
    }
    return cnt;
}
