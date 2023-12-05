/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        Node *temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        cnt=cnt-n;
        if(cnt<0) return -1;
        temp=head;
        while(cnt--)
        {
            temp=temp->next;
        }
        return temp->data;
    }
};

