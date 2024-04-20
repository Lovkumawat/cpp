#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
        void prism(int n,unordered_map<int,list<pair<int,int>>> adj){
            vector<int> key(n+1);
            vector<bool> mst(n+1);
            vector<int> parent(n+1);
            for(int i=0;i<=n;i++){
                key[i]=INT_MAX;
                mst[i]=false;
                parent[i]=-1;
            }
            key[1]=-0;
            parent[1]=-1;
            for(int i=0;i<n;i++){
                int min=INT_MAX;
                int u;
                for(int v=0;v<=n;v++){
                    if(key[v]==true&&key[v]<min){
                         u=v;
                         min=key[v];
                    }
                }
                mst[u]=true;
                for(auto i: adj[u]){
                    int v =i.first;
                    int w=i.second;
                    if(mst[v]==true&&w<key[v]){
                    parent[v]=u;
                    key[v]=w;
                }
            }
            }

        }
        //  void print(vector<int> key,vector<int> parent,int n){
        //     for(int i=2;i<=n;i++){
        //         cout<<parent[i];
        //     }
        //  }

};
int main(){
     int u,v,n,m,w;
    cout<<"enter the number of node : ";
    cin>>n;
    cout<<endl;
    cout<<"enter the number of edge : ";
    cin>>m;
    cout<<endl;
    graph g;
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<n;i++){
        cin>>u;
        cin>>v;
        cin>>w;
        adj[u].push_back(make_pair(v,w));
       adj[v].push_back(make_pair(v,w));

    }
    return 0;
}
