/* Tree node structure  used in the program

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

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int calheight(Node* root) {
        if(root==NULL)
            return 0;
        int lh=calheight(root->left);
        int rh=calheight(root->right);
        if(lh>rh)
        {
            return lh+1;
        }
        else
        {
            return rh+1;
        }
    }
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)
            return 0;
        int lh=calheight(root->left);
        int rh=calheight(root->right);
        int curd=lh+rh+1;
        int ld=diameter(root->left);
        int rd=diameter(root->right);
        if(ld>rd && ld>curd)
        {
            return ld;
        }
        else if(rd>ld && rd>curd)
        {
            return rd;
        }
        else
        {
            return curd;
        }
    }
};
