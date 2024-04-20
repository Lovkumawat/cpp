#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;    // binary search //
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    cout<<"enter the size of array ";
    int size;
    cin>>size;
    int *arr=new int[size];
    cout<<"enter the value in array ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target "<<endl;
    cin>>target;
    int ans= binarysearch(arr,size,target);
    cout<<"index of "<<target<<"is : "<<ans;
    return 0;
}