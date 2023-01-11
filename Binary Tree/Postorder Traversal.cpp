

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
void porder(Node *root, vector<int> &ans)
{
    if(root==NULL)
    return;
    porder(root->left,ans);
    porder(root->right,ans);
    ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
    vector<int> ans;
    porder(root, ans);
    return ans;
}
