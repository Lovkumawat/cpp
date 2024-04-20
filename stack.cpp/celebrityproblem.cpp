#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool knows(vector<vector<int>> &vec,int a,int b,int n){
    if(vec[a][b]==1){
        return true;
    }else{
        return false;
    }

}
int celebrity(vector<vector<int>> &vec,int n){ // CELEBRITY PROBLEM //
    stack <int> s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size()>1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();

        if(knows(vec,a,b,n)){
            s.push(b);
        }else{
            s.push(a);
        }
    }
    int candidate=s.top();
    bool checkrow=false;
    int zerocount=0;
    for(int i=0;i<n;i++){
        if(vec[candidate][i]==0){
            zerocount++;
        }
        if(zerocount==n){
            checkrow=true;
            cout<<zerocount<<endl;
            cout<<n<<endl;
                cout<<"checkrow: "<<checkrow<<endl;
        }
    }
    bool checkcol=false;
    int onecount=0;
    for(int i=0;i<n;i++){
        if(vec[i][candidate]==1){
            onecount++;
        }
        int x=n-1;
        if(onecount==x){
           checkcol=true; 
           cout<<onecount<<endl;
           cout<<n-1<<endl;
              cout<<"checkcol: "<<checkcol<<endl;
        }
    }
    cout<<"checkcol: "<<checkcol<<endl;
    cout<<"checkrow: "<<checkrow<<endl;


    if(checkcol==true && checkrow==true){
        return candidate;
    }else{
        return -1;
    }


}
int main(){
    int size;
    cout<<"enter the size of  vector : ";
    cin>>size;
    vector<vector<int>> vec={{0,1,0},{0,0,0},{0,1,0}};
    int n=3;
  int ans=  celebrity(vec,n);
  cout<<ans;
    return 0;
}