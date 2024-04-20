#include<iostream>
#include<functional>
#include<algorithm>


using namespace std;
int main(){
    //Function objects(functor) :Function wrapped in a class so that 
    // it available like an object
    int arr[]={23,56,3,89,65,2};
    sort(arr,arr+5);//sort assending order
    sort(arr,arr+5,greater<int>());//sort in decending order
    for(int i=0;i<6;i++){
    cout<<arr[i]<<endl;
    }
    return 0;
}