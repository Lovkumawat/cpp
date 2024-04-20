#include<iostream>
#include<vector>
using namespace std;
vector<int> window_of_K_order(int arr[],int size,int k){
    int i=0;
    vector<int> ans;
    while(i<(size-(k-1))){
        int j=i;
        int count=0;
       while(j<i+k) {
            if(arr[j]<0){
                ans.push_back(arr[j]);   // FIRST NEGETIVE INTEGER IN EVERY WINDOW OF SIZE K //
                break;
            }
           else if(arr[j]>0){
                count++;
                if(count==k){
                    ans.push_back(0);
                }
            }
            j++;
        }
        i++;
    }
   return ans;
}
int main(){
    int size;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the order of window "<<endl;
    cin>>k;
    vector<int> answer;
  answer=  window_of_K_order(arr,size,k);
  for(int i=0;i<answer.size();i++){
    cout<<answer[i]<<" ";
  }

    return 0;
}