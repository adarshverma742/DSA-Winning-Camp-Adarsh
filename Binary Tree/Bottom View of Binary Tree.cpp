//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector <int> bottomView(Node *root) 
    {
        map<int, int> mp;
        queue<pair<Node*, int> > q;
        q.push({root , 0});
        while(q.empty()==false)
        {
            auto p=q.front();
            Node* top=p.first;
            int hd=p.second;
            q.pop();
            mp[hd]=top->data;
            if(top->left!=NULL)
            q.push({top->left , hd-1});
            if(top->right!=NULL)
            q.push({top->right, hd+1});
        }
        vector<int> ans;
        for(auto a : mp)
        ans.push_back(a.second);
        return ans;
    }
};
