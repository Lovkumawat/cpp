#include<iostream>
using namespace std;
void rotate(int arr[],int size){
    int i=0;
    while(i<size){
        arr[i]=arr[i+1];
        i++;
    }                 // ROTATE AN ARRAY OF ORDER K //
    arr[i]=arr[i+1];
}
int main(){
    int size;
    cout<<"enter the size of an array : "<<endl;
    cin>>size;
     int *arr=new int[size];
     cout<<"enter the value in array : "<<endl;
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }
     int k;
     cout<<"enter the order : "<<endl;
     cin>>k;
     int *temp=new int[k];
     int i=0;
     int j=0;
     while(j<k){
        temp[j]=arr[i];
        j++;
        i++;
     }
  
     for(int i=0;i<k;i++){
         rotate(arr,size);
     }
     int s=0;
     int l=size-k;
    while(l<size){
        arr[l]=temp[s];
        s++;
        l++;
    }
    cout<<"After rotate of order "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}