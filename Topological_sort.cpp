vector<int> FindTopoSort(int N,vector<int>adj[])
{
    //stack for storing the nodes
    stack<int> st;
    // visited array for storing the visited nodes.
    bool vis[N] = {false};
    
    // run a loop from 1 to n
    for(int i = 0;i<N;i++)
    {
        if(vis[i]==false)
            toposort(i,adj,st,vis);
    }
    vector<int> ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
}
void toposort(int i,vector<int>adj[],stack<int>st,int vis[])
{
    if(vis[i]==true) return;

    vis[i] = true;

    for(auto x: adj[i])
    {
        if(vis[x]==false)
            toposort(x,adj,st,vis);
    }
    st.push(i);
}
bool cycle_exist()
{
    unordered_map<int,int> pos;
    int ind = 0;
    while(!s.empty())
    {
        pos[s.top] =ind;
        ind++;
        s.pop();
    }
    for(int i =0;i<n;i++)
    {
        for(auto it :adj[i])
        {
            //cycle exisit baby
            if(pos[i]>pos[it]) return true;
        }
    }
}