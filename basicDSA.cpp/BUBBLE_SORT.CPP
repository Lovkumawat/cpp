#include<iostream>
using namespace std;

// void bubblesort(int arr[],int size){
//     int temp;
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }
void bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}
int main(){
    int size ;
    cout<<"enter th size of array : "<<endl;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,size);
    cout<<"sorted array is : "<<endl;
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}