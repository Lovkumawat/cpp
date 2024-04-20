#include<iostream>
#include<queue>
#include<stack>

using namespace std;
// reverse queue using array //
void reverse1(queue <int> &q){
    int n=q.size();
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=q.front();
        q.pop();
    }
    for(int i=(n-1);i>=0;i--){
        q.push(arr[i]);
    }
}
// reverse queue using stack //
 void reverse2(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int ans=q.front();
        q.pop();
        s.push(ans);
    }
    while(!s.empty()){
        int ans=s.top();
        s.pop();
        q.push(ans);
    }
}

int main(){
    queue<int> q;
    int size;
    cout<<"enter the size of queue ";
    cin>>size;
    int element;
    cout<<"enter the element in queue :"<<endl;
    for(int i=0;i<size;i++){
        cin>>element;
       q.push(element);

    }
   // reverse1(q);
      reverse2(q);
    cout<<"new queue is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
 
   // cout<<"enter the element in queue :"<<endl;
    //for(int i=0;i<size;i++){
      //  cin>>element;
        //q.push(element);
    //}
    return 0;
}