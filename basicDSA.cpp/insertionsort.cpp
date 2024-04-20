#include<iostream>
using namespace std;
void sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(j>=0;j<size;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;

            }
           
        }
         arr[j+1]=temp;
    }
}
int main(){
    int arr[]={10,5,7,4,8,2,1};
    sort(arr,7);
    cout<<"after sorting array : "<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}