#include<iostream>
using namespace std;
int search(int arr[],int size,int x){
    int hi=size-1;
    int lo=0;
    int pos=lo + ((x-arr[lo])*(hi-lo)/(arr[hi]-arr[lo]));
    return pos;
}
int main(){
    int size;
    cout<<"enter the size of array : ";
    cin>>size;
    int *arr=new int[size];
    cout<<"enter th element in array : "<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int k;
    cout<<"enter the evalue of key : "<<endl;
    cin>>k;
   int ans= search(arr,size,k);
   cout<<"index is :"<<ans;


}