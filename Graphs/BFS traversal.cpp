class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void BFS(vector<int> adj[] , int s , vector<int> &res , vector<bool> &visited)
    {
        queue<int> q;
        q.push(s);
        visited[s]=true;
        while(q.empty()==false)
        {
            int u=q.front();
            q.pop();
            res.push_back(u);
            for(auto v : adj[u])
            {
                if(visited[v]==false)
                {
                    q.push(v);
                    visited[v]=true;
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<bool> visited(V , false);
        vector<int> res;
        BFS(adj , 0 , res , visited);
        return res;
    }
};
