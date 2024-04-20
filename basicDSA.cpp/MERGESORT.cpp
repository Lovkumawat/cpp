#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int mainarray=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarray++];
    }
    mainarray=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarray++];
    }
    int index1=0;
    int index2=0;
    mainarray=s;

    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarray]=first[index1];
            index1++;
            mainarray++;
        }else{
            arr[mainarray]=second[index2];
            index2++;
            mainarray++;
        }
    }
    while(index1<len1){
          arr[mainarray]=first[index1];
           index1++;
            mainarray++;
    }
    while(index2<len2){
        arr[mainarray]=second[index2];
            index2++;
            mainarray++;

    }
    delete[]first;
    delete[]second;

}
void mergesort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int mid=(s+e)/2;
// left part sort krna hai 
    mergesort(arr,s,mid);
// right part sort krna hai
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(){
    int size;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    cout<<"enter the element in list : "<<endl;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,size-1);
    cout<<"sorted array : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}