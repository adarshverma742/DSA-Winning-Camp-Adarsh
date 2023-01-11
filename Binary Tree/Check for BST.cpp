class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool issBST(Node* root,int  mini, int maxi)
    {
        if(root==NULL) return true;
        return((root->data > mini)&& (root->data < maxi)&& issBST(root->left, mini, root->data) && issBST(root->right, root-> data , maxi));
    }
    bool isBST(Node* root) 
    {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        return (issBST(root, mini, maxi));
        
    }
};

