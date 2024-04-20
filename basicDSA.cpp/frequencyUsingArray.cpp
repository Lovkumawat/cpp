#include<iostream>
using namespace std;
void sort(int arr[],int size){

    for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
}
}
void frequency(int arr[],int size){
    int index=0;
    int count=0;
    int j=index;
    while(index<size){
            if(arr[index]==arr[j]){
                    count++;
            j++;
            }else{
                cout<<arr[index]<<"occurs"<<count<<"times"<<endl;
                index=index+count;
                j=index;
                count=0;
            }
    }
}
int main(){
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"enter the value in array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,size);
    //cout<<"after sort array"<<endl;
   // for(int i=0;i<size;i++){
    //    cout<<arr[i]<<" ";
    //}
    frequency(arr,size);
    return 0;
}
