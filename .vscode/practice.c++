#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivote=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivote){
            count++;
        }                               // QUICK SORT //
    }
    int pivoteindex=s+count;
    swap(arr[pivoteindex],arr[s]);
    int i=s;
    int j=e;
    while(i<pivoteindex&& j>pivoteindex){
        while(arr[i]<pivote){
            i++;
        }
        while(arr[j]>pivote){
            j--;
        }
        if(i<pivoteindex&& j>pivoteindex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivoteindex;
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    //recursion call
    //left part//
    quicksort(arr,0,p-1);
    //right part//
    quicksort(arr,p+1,e);
}
int main(){
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"enter the element in array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,size-1);
    cout<<" quicksorted array is : ";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}