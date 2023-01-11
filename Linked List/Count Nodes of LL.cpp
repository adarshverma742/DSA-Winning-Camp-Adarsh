/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head)
    {
        Node *curr=head;
        int count=0;
        while(curr!=NULL)
        {
            curr=curr->next;
            count++;
        }
        return count;
    

    }
};
    
