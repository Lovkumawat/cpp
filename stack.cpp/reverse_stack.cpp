#include<iostream>
#include<stack>
using namespace std;
int main(){
   /* int size;
    cout<<"enter the size of stack  : ";   // reverse stack using array //
    cin>>size;
    int d;
    stack<int> s;
    for(int i=0;i<size;i++){
        cin>>d;
        s.push(d);
    }
    int *arr=new int [size];
    for(int i=0;i<size;i++){
        arr[i]=s.top();
        s.pop();
    }
    
    for(int i=0;i<size;i++){
        s.push(arr[i]);
        cout<<s.top()<<" ";
    }
    */
        int size;
    cout<<"enter the size of stack  : ";   // reverse stack using string //
    cin>>size;
     char d;
    stack<char> s;
    for(int i=0;i<size;i++){
        cin>>d;
        s.push(d);
    }
    char *arr=new char [size];
    for(int i=0;i<size;i++){
        arr[i]=s.top();
        s.pop();
    }
    for(int i=0;i<size;i++){
        s.push(arr[i]);
        cout<<s.top()<<" ";
    }
    return 0;
}
