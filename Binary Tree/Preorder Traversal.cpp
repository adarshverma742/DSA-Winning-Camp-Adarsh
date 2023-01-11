

/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
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

//Function to return a list containing the preorder traversal of the tree.

void preOrder(Node *root, vector<int> &ans)
{
    if(!root)
    return;
    ans.push_back(root->data);
    preOrder(root->left,ans);
    preOrder(root->right,ans);
}
vector <int> preorder(Node* root)
{
    vector<int> ans;
    preOrder(root,ans);
    return ans;
}
