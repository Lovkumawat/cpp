#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    Queue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
        
    }
    bool isempty(){
        if(front==-1&&rear==-1){
            return true;
        }else{
            return false;
        }
    }
    void push(int data){
        if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
        return ;
        }else if(front==-1&& rear==-1){   // condition for push first element //
            front=0;
            rear=0;
            arr[rear]=data;
        }else if(rear==size-1 && front!=0){   // condition for circular //
            rear=0;
            arr[rear]=data;
        }else{
            rear++;
            arr[rear]=data;
        }
      
    }
    int pop(){
        if(front==-1){
            //cout<<"Queue is empty "<<endl;
            return -1;
        }
        int ans=arr[front];
         if(front==rear){
            front=rear=-1;
                           // only single emenet is present
        }else if( front ==size-1){

            front=0;// to maintain cycle nature
        }else{
             front++;   //normal flow
        }
         return ans;
    }
    void display(){
        while(front!=rear+1){
            cout<<arr[rear];
            front++;
        }
    }
};
int main(){
Queue q(6);
q.push(1);
q.push(2);
q.push(1);



cout<<q.pop()<<" ";
cout<<q.pop()<<" ";
cout<<q.pop()<<" ";
cout<<q.pop()<<" ";





    return 0;
}
