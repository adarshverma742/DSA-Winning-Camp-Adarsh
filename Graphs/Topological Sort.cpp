class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void DFS(vector<int> adj[] , int s , stack<int>  &st , vector<bool> &visited)
	{
	    visited[s] = true;
	    for(int u  : adj[s])
	    {
	        if(visited[u]==false)
	        DFS(adj ,  u , st , visited);
	        
	    }
	    st.push(s);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int> st;
	    vector<bool> visited(V , false);
	    vector<int> res;
	    for(int i=0 ; i<V ; i++)
	    {
	        if(visited[i] == false)
	        DFS(adj ,  i , st , visited);
	    }
	    while(st.empty()==false)
	    {
	        res.push_back(st.top());
	        st.pop();
	    }
	    return res;
	}
};
