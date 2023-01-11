

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.

Node *ctree(int in[], int post[], int is, int ie, int &pindex)
{
    if(is>ie) return NULL;
    
    Node* root= new Node(post[pindex--]);
        int index;
        for(int i=is ; i<=ie ; i++)
        {
            if(root->data==in[i])
            {
                index=i;
                break;
            }
        }
        root->right=ctree(in, post, index+1, ie, pindex);
        root->left=ctree(in, post, is, index-1, pindex);
        return root;
}
Node *buildTree(int in[], int post[], int n) 
{
    int pindex=n-1;
    Node* root=ctree(in, post, 0, n-1, pindex);
    return root;
    
}
