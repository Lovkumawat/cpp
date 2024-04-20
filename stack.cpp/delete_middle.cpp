#include<iostream>
#include<stack>
using namespace std;
void deletemiddle(stack<int>&s,int count,int size){
    // base case //
    if(count==size/2){
        s.pop();
        return ;               // DELETE MIDDLE ELEMENT //
    }
        cout<<"hey";
        int num=s.top();
        s.pop();
         deletemiddle(s,count+1,size);
         s.push(num);
    }
int main(){
    int size;
    cout<<"enter the size of stack : ";
    cin>>size;
    stack<int> s;
    int d;
    for(int i=0;i<size;i++){
        cin>>d;
        s.push(d);
    }
    int count=0;
    deletemiddle(s,count,size);
    int *arr=new int [size-1];
    for(int i=0;i<size-1;i++){
        arr[i]=s.top();
        s.pop();
    }
    
    for(int i=0;i<size-1;i++){
        s.push(arr[i]);
       
    }
    for(int i=0;i<size-1;i++){
        arr[i]=s.top();
        cout<<arr[i]<<" ";
        s.pop();
    }


}