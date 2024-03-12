class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int> q;
        vector<int> v(V,0);
        vector<int> result;
        q.push(0);
        v[0]=1;
        while(!q.empty()){
            for(int i=0;i<adj[q.front()].size();i++){
                if(v[adj[q.front()][i]]==0){
                q.push(adj[q.front()][i]);
                v[adj[q.front()][i]]=1;
                }
            }
            result.push_back(q.front());
            q.pop();
        }
        return result;
    }
};
