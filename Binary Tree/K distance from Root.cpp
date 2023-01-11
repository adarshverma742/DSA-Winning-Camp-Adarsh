

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root
void kd(struct Node* root, int k, vector<int> &ans)
{
    if(root==NULL) return;
    if(k==0)
    {
        ans.push_back(root->data);
        return;
    }
    kd(root->left, k-1, ans);
    kd(root->right, k-1, ans);
    
}
vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> ans;
    kd(root, k, ans);
    return ans;
    
}
