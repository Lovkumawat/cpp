#include<iostream>
#include<stack>
using namespace std;
void insertATbottom(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return ;
    }else{
    int num=st.top();
    st.pop();
    insertATbottom(st,x);
    st.push(num);
    }
}
void reverse(stack<int> &st){ // reverse using recursion //
    if(st.empty()){
        return ;
    }
    int num=st.top();
    st.pop();
    reverse(st);   
    insertATbottom(st,num);
}
int main(){
    int size,d;
    cout<<"enter the size of stack";
    cin>>size;
    stack<int> st;
    for(int i=0;i<size;i++){
        cin>>d;
        st.push(d);
    }
    reverse(st);
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cout<<st.top()<<" ";
        st.pop();
    //  cout<<arr[i]<<" ";
    }
    return 0;
}