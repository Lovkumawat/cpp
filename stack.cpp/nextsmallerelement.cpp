#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nextsmaller(vector<int> &vec,int size){
    stack<int> s;
    s.push(-1);
    vector<int>ans(size);
    for(int i= size-1;i>=0;i--){ // NEXT SMALLER ELEMENT //
        int curr=vec[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
int main(){
    int size;
    cout<<"enter the size of vector ";
    cin>>size;
    vector<int> vec;
    int element;
    cout<<"enter the element in vector : ";
    
    for(int i=0;i<size;i++){
        cin>>element;
        vec.push_back(element);
    }
    vector<int> answer;
   answer=  nextsmaller(vec,size);
   for(int i=0;i<answer.size();i++){
    cout<<answer[i]<<" ";
   }
    return 0;
}