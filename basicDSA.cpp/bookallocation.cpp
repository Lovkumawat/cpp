#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagecount=0;
    for(int i=0;i<n;i++){
       if(pagecount+arr[i]<=mid){
        pagecount=pagecount+arr[i];
       }else{
        studentcount++;
        if(studentcount>m||arr[i]>mid){
            return false;
        }
         pagecount=arr[i]; 
       }
    }
    return true;
}
int bookallocation(int arr[],int n,int m){
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    int ans;
    while(start<end){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;

        }else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}

int main(){
    int n;
    cout<<"enter the no of books : "<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the pages in respective books : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"enter the no of students : "<<endl;
    cin>>m;
   int answer= bookallocation(arr,n,m);
   cout<<"answer is:  "<<answer;

    return 0;
}