/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>res;
       queue<Node*>q;
   q.push(root);
   while(!q.empty())
   {
       int n = q.size();
       for(int i=0; i<n; i++)
       {
           Node* curr = q.front();
           q.pop();
           if(i==n-1)
           {
               cout << curr->data << " ";
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
   }
   return res;
    }
};
