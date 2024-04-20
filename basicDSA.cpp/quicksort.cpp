#include<iostream>
using namespace std;
void swap(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}
int partition(int arr[],int low,int high){
int pivot = arr[high]; // selecting last element as pivot
int i = (low - 1); // index of smaller element
for (int j = low; j <= high- 1; j++)
{
// If the current element is smaller than or equal to pivot
if (arr[j] <= pivot)
{ i++; // increment index of smaller element
swap(arr[i], arr[j]);
}
}
swap(arr[i + 1], arr[high]);
  
    return i+1;
}
void quicksort(int arr[],int p,int r){
    if(p<r){
       int q=partition(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);
    }
}
int main(){
    int size;
    cout<<"enter th size of array : "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"enter th emement in array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,size-1);
    cout<<"sorted array :  ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}