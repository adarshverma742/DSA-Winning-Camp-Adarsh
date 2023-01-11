/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> ans;
    void inorder(Node *root)
    {
        if(root==NULL)
        return;
        inOrder(root->left);
        ans.push_back(root->data);
        inOrder(root->right);
    }
    vector<int> inOrder(Node* root) 
    {
      inorder(root);
      return ans;
    }
};
