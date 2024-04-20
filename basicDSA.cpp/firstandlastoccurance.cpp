// FIRST AND LAST OCCURANCE IN AN ARRAY USING BINARY SEARCH //
#include<iostream>
using namespace std;
 int firstoccurance(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans1= -1;
    while(start<=end){
        if(arr[mid]==target){
            ans1=mid;
            end=mid-1;
        }
      else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans1;
}
 int secondoccurance(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans2= -1;
    while(start<=end){
        if(arr[mid]==target){
            ans2=mid;
            start=mid+1;
        }
      else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans2;
}

int main(){
    int size;
    cout<<"enter the size of an array ";
    cin>>size;
    int *arr=new int[size];
    cout<<"enter the value in array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target : ";
    cin>>target;
   int first = firstoccurance(arr,size,target);
   int second = secondoccurance(arr,size,target);

   cout<<"firstoccurance of "<<target<<" is : "<<first<<endl;
   cout<<"secondoccurance of "<<target<<" is : "<<second<<endl;
    return 0;
}