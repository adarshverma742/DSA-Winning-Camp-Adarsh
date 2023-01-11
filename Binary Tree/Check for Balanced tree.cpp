/* A binary tree node structure

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

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int balance(Node* root)
    {
        if(root==NULL) return NULL;
        int lh=balance(root->left);
        if(lh==-1) return -1;
        int rh=balance(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        else return max(lh, rh)+1;
    }
    bool isBalanced(Node *root)
    {
        if(balance(root)==-1)
        return false;
        else
        return true;
    }
};
