#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of an array : ";
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<size;i++){     // second min //
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    cout<<"minimum of an array : "<<min;
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secondmin=max;
    for(int i=0;i<size;i++){
        if((arr[i]>min) && (secondmin>=arr[i])){
            secondmin=arr[i];
        }
    }
    cout<<"second min is : "<<secondmin;
    return 0;
}