#include<iostream>
using namespace std;

// first approach //
/* void sort01(int arr[],int size){
    int left=0;
    int right=size-1;                                 // time comlexcity is : O(n)
    while(left<right){
        if(arr[left]==1&& arr[right]==1 && left<right){
            right--;
        }else if(arr[left]==0&& arr[right]==0 && left<right){
            left++;
        }else if(arr[left]==1&& arr[right]==0 && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }else{
            left++;
            right--;
        }
    }
}
*/
// second approach //

void sort01(int arr[],int size){
    int left =0;
    int right =size-1;
    while(left<right){
        while(arr[left]==0&&left<right){     // time comlexcity is : O(n) //
            left++;
        }
        while(arr[right]==1&& left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int size;
    cout<<"enter the size of an array :";
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort01(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}