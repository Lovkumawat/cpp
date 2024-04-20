#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int median(int arr[],int l,int r,int k){
    int ind=r-l+1;
    int index=rand()%ind;
    int j=0, n=0, m=0;
    int s1[10],s2[1],s3[10];
    for(int i=0;i<=r;i++){
        if(arr[i]<arr[index]){
            s1[j]=arr[i];
            j++;
        }else if(arr[i]==arr[index]){
            s2[n]=arr[index];
            n++;
        }else{
            s3[m]=arr[i];
            m++;
        }
    }
    if(j>=k){
        median(s1,0,j-1,k);
    }else if((j+n)>=k){
        return arr[index];
    }else{
        median(s3,0,m-1,k-(j+n));
    }
}
int main(){
    int size;
    cout<<"enter the size of array : "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"enter the element in array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"find kth smallest element : "<<endl;
    cin>>k;
    cout<<"median is : ";
   cout<< median(arr,0,size-1,k);
   
    return 0;

}