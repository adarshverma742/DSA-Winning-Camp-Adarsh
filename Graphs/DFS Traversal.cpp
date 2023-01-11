class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFS(vector<int> adj[] , int s , vector<int> &res , vector<bool> &visited)
    {
        visited[s]=true;
        res.push_back(s);
        for(auto u : adj[s])
        {
            if(visited[u]==false)
            DFS(adj , u , res , visited);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<bool> visited(V , false);
        vector<int> res;
        DFS(adj , 0 , res , visited);
        return res;
    }
};
