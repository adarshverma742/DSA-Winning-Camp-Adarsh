/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(q.empty()==false)
        {
            auto p=q.front();
            Node* top=p.first;
            int hd=p.second;
            if(mp.find(hd)==mp.end())
            mp[hd]=top->data;
            q.pop();
            if(top->left!=NULL)
            q.push({top->left, hd-1});
            if(top->right!=NULL)
            q.push({top->right, hd+1});
        }
        vector<int> ans;
        for(auto a : mp)
        {
            ans.push_back(a.second);
        }
        return ans;
    }

};
