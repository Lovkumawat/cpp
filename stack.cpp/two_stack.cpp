#include<iostream>
using namespace std;
class two_stack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    two_stack(int s){
        this->size=size;
        top1=-1;
        top2=s;
        arr=new int[s];
    }
    // PUSH IN STACK 1 //
    void push1(int element){
        if(top2-top1>1){
            top1++;
            arr[top1]=element;
        }else{
            cout<<"stack is overflow ";

        }
    }
        void push2(int element){
            if(top2-top1>1){
                top2--;
                arr[top2]=element;
            }else{
                cout<<"stack is overflow ";
            }
        }
            int pop1(){
                if(top1>=0){
                    int ans=arr[top1];
                    top1--;
                    return ans;

                }else{
                    return -1;
                }
            }
            int pop2(){
                if(top2>=0){
                    int ans=arr[top2];
                    top2++;
                    return ans;

                }else{
                    return -1;
                }
            }
};

int main(){
    two_stack st(6);
    st.push1(2);
    st.push1(5);
    st.push2(6);
    return 0;
}
