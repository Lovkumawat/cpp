#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;
int solve(int arr[],int size,int k){ // sum of maximum and minimum element in order of k //
    int i=0;
    int sum=0;
    while(i<size-(k-1)){
        int j=i;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        while(j<i+k){
            maxi=max(maxi,arr[j]);
            mini=min(mini,arr[j]);
            
            j++;
        }
        sum=sum+maxi+mini;
        i++;
    }
    return sum;
}
int main(){
    int size;
    cout<<"enter the size of array :"<<endl;
    cin>>size;
    int *arr=new int[size];
    int element;
    cout<<"enter the lement in array";
    for(int i=0;i<size;i++){
        cin>>element;
    arr[i]=element;
    }
    int k;
    cout<<"enter the order : ";
    cin>>k;
    int ans=solve(arr,size,k);
    cout<<"sum is : "<<ans;
    return 0;
}