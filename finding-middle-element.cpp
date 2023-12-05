/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        int cnt=0;
        Node *tmp = head;
        while(tmp!=NULL)
        {
            cnt++;
            tmp=tmp->next;
        }
        tmp=head;
        for(int i=0; i<cnt/2; i++)
        {
            tmp=tmp->next;
        }
        return tmp->data;
    }
};
