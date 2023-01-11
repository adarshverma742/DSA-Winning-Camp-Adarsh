

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


//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    stack<Node*> s;
    stack<Node*> sc;
    vector<int> v;
    if(!root) return v;
    s.push(root);
    while(!s.empty() || !sc.empty())
    {
        while(!s.empty())
        {
            Node* top=s.top();
            s.pop();
            v.push_back(top->data);
            if(top->right)
            sc.push(top->right);
            if(top->left)
            sc.push(top->left);
        }
        while(!sc.empty())
        {
            Node* top=sc.top();
            sc.pop();
            v.push_back(top->data);
            if(top->left)
            s.push(top->left);
            if(top->right)
            s.push(top->right);
        }
    }
    return v;
}
