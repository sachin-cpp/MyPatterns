#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;
template<typename T>
class graph{
    map<T,list<T>> adj;
    public:
    graph(){}
    void addedge(T u, T v, bool bidir=true)
    {
        adj[u].push_back(v);
        if(bidir)
        {
            adj[v].push_back(u);
        }
    }
    
     int cyclicbfs(T src){
         map<T, bool> visited;
         map<T, int> parent;
         queue<T> q;
         
         q.push(src);
         visited[src] = true;
         parent[src] = src;
         
         while(!q.empty()){
             T node = q.front();
             q.pop();
             
             for(T neighbour: adj[node]){
                 if(visited[neighbour]== true && parent[node]!= neighbour)
                 return true;
                 
                 else{
                     visited[neighbour]=true;
                     parent[neighbour]= node;
                     q.push(neighbour);
                 }
             }
         }
         
         return false;
     }
    
};

int main()
{
    graph<int> G;
    G.addedge(0,1);
    G.addedge(0,3);
    G.addedge(1,2);
    G.addedge(2,3);
    int value=G.cyclicbfs(0);
    if(value==0) cout<<"Acyclic";
    else cout<<"Cyclic";
    // G.displayadj();
    return 0;
}
