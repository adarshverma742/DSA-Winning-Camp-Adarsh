class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool DFS(vector<int> adj[] , int s , vector<int> &visited , vector<int> &recstk)
    {
        visited[s]=true;
        recstk[s]=true;
        for(int u : adj[s])
        {
            if(visited[u]==false)
            {
                if(DFS(adj , u , visited , recstk)==true)
                return true;
            }
            else if(recstk[u]==true)
            return true;
        }
        recstk[s]=false;
        return false;
        
    }
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int> visited(V , false);
        vector<int> recstack(V , false);
        for(int i=0 ; i<V ; i++)
        {
            if(visited[i]==false)
            {
                if(DFS(adj ,  i , visited , recstack)==true)
                return true;
            }
        }
        return false;
    }
};
