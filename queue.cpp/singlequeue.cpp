#include<iostream>
#include<queue>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    Queue(int size){
     this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    bool isempty(){
        if(front==rear){
            return true;
        }else{
            return false;
        }
    }
    void push(int data){
        if(rear==size-1){
            cout<<"queuq is full";
        }else if(front==-1 && rear==-1){
            front=0;                     // insert first element//
            rear=0;
            arr[rear]=data;
            // rear++;
        }else{
             rear++;
            arr[rear]=data;
        }
    }
    int pop(){
        int ans;
        if(front==-1&&rear==-1){
            cout<<"Queue is empty";
             return -1;
       }else if(front==rear){
             ans=arr[front];
            front=-1;
            rear=-1;
            return ans;
        } else{
               ans=arr[front];
            arr[front]=-1;
            front++;
             return ans;
        }
    }
    void display(){
    while(front!=rear+1){
    cout<<arr[front]<<" ";
    front++;
    }
    }
};
// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     Queue(int size){
//         this->size=size;
//         arr=new int[size];
//         front=-1;
//         rear=-1;
//     }
//     void push(int d){
//         if(rear==size){
//             cout<<"Queue is full";
//         }else if(front==-1&&rear==-1){
//             front=0;
//             rear=0;
//             arr[rear]=d;
//             rear++;
//         }else{
//             arr[rear]=d;
//             rear++;
//         }
//     }
//     void pop(){
//         if(front==rear){
          
//             cout<<"queue is empty";
//         }else{
//             front++;
//         }
//     }
//   
// };
int main(){
    // queue<int> q;
    // q.push(1);
    //  q.push(2);
    //   q.push(3);
    //    q.push(4);
    // //    cout<<q.front();
    // //    cout<<q.back();
    //   // q.pop();
    //    cout<<q.front();
 //<--------------------------------------------------------------------------------------------------------------------------------------------------------------------------->//
Queue q(3);
q.push(10);
q.push(20);
q.push(3);
q.display();
    return 0;

}
