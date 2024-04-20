#include<iostream>
using namespace std;
class heap{
public:
int *arr=new int[100];
int size;
heap(){
    arr[0]=-1;
    size=0;
}
// INSERT //
void insert(int val){
    size=size+1;
    int index=size;
    arr[index]=val;

    while(index>1){
        int parent=index/2;

        if(arr[parent]<arr[index]){
            int temp=arr[parent];
            arr[parent]=arr[index];
            arr[index]=temp;
            index=parent;
        }else{
            return ;
        }
    }
}

// DELETE ROOT  //
// void deleteheap(){
//     if(size==0){
//         cout<<"heap is empty : ";
//         return ;
//     }

//     arr[1]=arr[size];
//     size--;
//     int i=1;
//     while(i<size){
//         int leftindex=2*i;
//         int rightindex=2*i+1;
//         if(leftindex<size && arr[i]<arr[leftindex]){
//              int temp=arr[i];
//             arr[i]=arr[leftindex];
//             arr[leftindex]=temp;
//         i=leftindex;
//         }else if(rightindex<size && arr[i]<arr[rightindex]){
//                int temp=arr[i];
//             arr[i]=arr[rightindex];
//             arr[rightindex]=temp;
//         i=rightindex;
//         }else{
//             return;
//         }
//     }
// }
//  methode 2 for DELETE ROOT : // 
void deleteheap(){
    arr[1]=arr[size];
    size--;
    heapify(arr,size,1);
}




// HEAPIFY ALGO //
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    // left<=n at one based index or when delete //
    // left<n at zero based index //
    
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        heapify(arr,n,largest);
    }
}
void heap_sort(int arr[],int size){
    int n=size;
    while(n>1){
        // step-1//
        int temp=arr[1];
        arr[1]=arr[n];
        arr[n]=temp;
        n--;

        // step-2 //
        heapify(arr,n,1);

    }

}
// PRINT //
void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

};
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        heapify(arr,n,largest);
    }
}

int main(){
    heap h;
    // int size;
    // cout<<"enter the size of insert : "<<endl;
    // cin>>size;
    // int d;
    // for(int i=0;i<size;i++){
    //     cin>>d;
    //     h.insert(d);
    // }
    // h.print();
    //   h.deleteheap();
    //  cout<<endl;
    // // h.heap_sort();
    // h.print();
    int arr1[6]={-1,53,54,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        h.heapify(arr1,n,i);
    }
     h.print();
       for(int i=1;i<=n;i++){
        cout<<arr1[i]<<" ";
    }
     h.heap_sort(arr1,n);
     cout<<endl;
    //   h.print();
       for(int i=1;i<=n;i++){
        cout<<arr1[i]<<" ";
    }
     h.print();



    return 0;

}
