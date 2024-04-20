#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseKorder(queue<int> &q,int k){ // reverse first k order element //
    int i=0;
    int n=q.size();
    stack<int> s;
    while(i<k){
        int ans=q.front();
        q.pop();
        s.push(ans);
        i++;  
    }
    while(!s.empty()){
        int ans=s.top();
        s.pop();
        q.push(ans);
    }
    int j=0;
    while(j<(n-k)){
        int ans=q.front();
        q.pop();
        q.push(ans);
        j++;
    }
}
int main(){
    int size;
    queue<int> q;
    cout<<"enter the size of an array :";
    cin>>size;
    int element;
    cout<<"enter the value in queue : ";
    for(int i=0;i<size;i++){
        cin>>element;
        q.push(element);
    }
    int k;
    cout<<"enter the value of : ";
    cin>>k;
    reverseKorder(q,k);
    cout<<"new queue is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}