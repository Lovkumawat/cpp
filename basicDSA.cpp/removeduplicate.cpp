#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array ";
    cin>>size;

    int *arr=new int [size];   // remove duplicate // 
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int INDEX=0;
    int i=INDEX+1;
    int c=0;
    while(INDEX<size){
      
        if(arr[INDEX]==arr[i]){
            i++;
            c++;
        }else{
             cout<<arr[INDEX]<<" ";
            cout<<arr[INDEX]<<"occure  "<<c+1<<"times"<<" "; // no of occurence //
            INDEX=INDEX+c+1;
            i=INDEX+1;
            c=0;
        }

    }
    return 0;
}