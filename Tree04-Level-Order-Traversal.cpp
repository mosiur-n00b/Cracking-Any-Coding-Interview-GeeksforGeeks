/* A binary tree Node

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


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      if(node==NULL)
        return ans;
      queue<Node*>q;
      q.push(node);
      q.push(NULL);
      while(!q.empty())
      {
          Node* node = q.front();
          q.pop();
          if(node != NULL)
          {
              cout << node->data << " ";
              if(node->left != NULL)
                q.push(node->left);
              if(node->right != NULL)
                q.push(node->right);
          }
          else
          {
              if(!q.empty())
              {
                  q.push(NULL);
              }
          }
      }
      return ans;
    }
};
