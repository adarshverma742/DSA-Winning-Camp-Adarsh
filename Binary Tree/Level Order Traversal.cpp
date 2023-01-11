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
        vector<int> v;
        queue<Node*> q;
        q.push(node);
        while(q.empty()==false)
        {
            Node *tp=q.front();
            q.pop();
            v.push_back(tp->data);
            if(tp->left!=NULL)
            q.push(tp->left);
            if(tp->right!=NULL)
            q.push(tp->right);
        }
        return v;
    }
};
