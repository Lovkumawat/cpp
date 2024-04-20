#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return ;
    }else{
    int num=st.top();
    st.pop();
    insertAtbottom(st,x);
    st.push(num);
    }
}
int main(){  // INSERT AT BOTTOM //
    int size;
    cout<<"enter the size of an stack";
    cin>>size;
    stack<int>st;
    int d;
    for(int i=0;i<size;i++){
        cin>>d;
        st.push(d);
    }
    int x;
    cout<<"enter the value of data"<<endl;
    cin>>x;
    insertAtbottom(st,x);
    int *arr =new int [size+1];
    for(int i=0;i<size+1;i++){
        arr[i]=st.top();
        st.pop();
    }

    for(int i=0;i<size+1;i++){
        st.push(arr[i]);
    }


    return 0;
}