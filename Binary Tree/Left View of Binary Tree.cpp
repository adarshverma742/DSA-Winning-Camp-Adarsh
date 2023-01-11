vector<int> leftView(Node *root)
{
    vector<int> v;
    queue<Node* > q;
    if(root==NULL) return v;
    q.push(root);
    while(q.empty()==false)
    {
        int s=q.size();
        for(int i=0; i<s; i++)
        {
            Node* top=q.front();
            q.pop();
            if(i==0)
            v.push_back(top->data);
            if(top->left!=NULL) q.push(top->left);
            if(top->right!=NULL) q.push(top->right);
        }
    }
    return v;
}
