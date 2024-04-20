
#include <bits/stdc++.h>
using namespace std;
 void solve(int n,int &count,vector<int> &v,set<vector<int>> &ans){
          if(n==0){
            sort(v.begin(),v.end());
            ans.insert(v);
            return;
        }
        if(n<0){
            return;
        }
        v.push_back(1);
        solve(n-1,count,v,ans);
        v.pop_back();
        if (n >= 2) {
        v.push_back(2);
        solve(n-2,count,v,ans);
        v.pop_back();
        }
    }
    long long countWays(int n) {
        
        int count=0;
        vector<int> v;
        set<vector<int>> ans;
        solve(n,count,v,ans);
         //ans.erase(unique(ans.begin(),ans.end()),ans.end());
         for(auto it:ans)
         {
                for(int i=0;i<it.size();i++)
                {
                    cout<<it[i]<<' ';
                }
                cout<<endl;
         }
         return ans.size();
    
    }
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    cout<<countWays(n)<<endl;

    return 0;
}