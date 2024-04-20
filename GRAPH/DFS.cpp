#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
void addedge(int u,int v, unordered_map<int,list<int>> &adj){
    adj[u].push_back(v);
    adj[v].push_back(v);
}
 void dfs(int n,unordered_map<int,list<int>> adj,vector<int>&ans, vector<bool> visited, int node){
    ans.push_back(node);
    visited[node]=true;
    for(auto i: adj[node]){
        if(!visited[i]){
            dfs(n,adj,ans,visited,i);
        }
    }
 }
 
};
int main(){
    int u,v,n,m;
    cout<<"enter the number of node : ";
    cin>>n;
    cout<<endl;
    cout<<"enter the number of edge : ";
    cin>>m;
    cout<<endl;
    unordered_map<int,list<int>> adj;
    graph g;
    vector<int> ans;
    for(int i=0;i<m;i++){
        cin>>u;
        cin>>v;
    g.addedge(u,v,adj);
    }
    int node=0;
    vector<bool> visited(n,false);
    g.dfs(n,adj,ans,visited,node);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}