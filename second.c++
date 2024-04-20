// #include<iostream>
// using namespace std;
// int searchbinary(int arr[],int start ,int end,int key){
// start;
// end;
// int mid=start+(end-start)/2;
// while(start<=end){
//     if(arr[mid]==key){      // SEARCH BINARY USING RECURSION //
//         return mid;
//     }
//     if(key>arr[mid]){
        
//           return searchbinary(arr,mid+1,end,key);       
//     }else{
        
//           return searchbinary(arr,start,mid-1,key);
//     } 
// }
// return -1;
// }

// int main(){
// int size;
// cout<<"enter the size of an array "<<endl;
// cin>>size;
// int *arr=new int[size];
// cout<<"enter the value in array "<<endl;
// for(int i=0;i<size;i++){
//     cin>>arr[i];
// }
// int key;
// cout<<"enter the value of key"<<endl;
// cin>>key;
// int start=0;
// int end=size-1;
//  int  ans= searchbinary(arr,start,end,key);
 
//  cout<<"answer is: "<<ans;

// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int size ;
//     cin>>size;
//     pair<int,string> arr[size];
//     for(int i=0;i<size ;i++){
//         cout<<"enter the string "<<endl;
//         string s;
//         cin>>s;
//         cout<<" enter the integer : "<<endl;
//         int a;
//         cin>>a;
//         arr[i].first=a;
//         arr[i].second=s;
//     }
//     cout<<"string before sorting : "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i].first<< " "<<arr[i].second<<endl;
//     }
//     int red=0;
//     vector<int>v1;
//     int blue=0;
//     vector<int>v2;
//     int yellow=0;
//     vector<int> v3;
//     for(int i=0;i<size;i++){
//         if(arr[i].second=="red"){
//             red++;
//             v1.push_back(arr[i].first);
//         }
//          if(arr[i].second=="blue"){
//             blue++;
//             v1.push_back(arr[i].first);
//         }
//          if(arr[i].second=="yellow"){
//             yellow++;
//             v1.push_back(arr[i].first);
//         }
//     }
//     sort(v1.begin(),v1.end());
//        sort(v2.begin(),v2.end());
//           sort(v3.begin(),v3.end());
//     int i=0;
//     int j=0;
//     int k=0;
//     int l=0;
    
//     while(red!=0){
//         arr[i].first=v1[j];
//         arr[i].second="red";
//         j++;
//         i++;
//         red--;
//     }
//      while(blue!=0){
//         arr[i].first=v1[j];
//         arr[i].second="blue";
//         k++;
//         i++;
//         blue--;
//     }
//      while(yellow!=0){
//         arr[i].first=v1[j];
//         arr[i].second="yellow";
//         j++;
//         i++;
//         yellow--;
//     }
//     cout<<endl;
//     cout<<"after sorting : "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i].first<< " "<<arr[i].second<<endl;
//     }
    

// }
// #include<iostream>
// using namespace std;
// int median(int arr[],int l,int r,int k){
//     int ind=r-l+1;
//     int index=rand()%ind;
//     int m=0,n=0,j=0;
//     int s1[10];
//     int s2[1];
//     int s3[10];
//     for(int i=0;i<=r;i++){
//         if(arr[i]<arr[index]){
//             s1[j]=arr[i];
//             j++;
//         }
//         else if(arr[i]==arr[index]){
//             s2[n]=arr[i];
//             n++;
//         }else{
//             s3[m]=arr[i];
//             m++;
//         }
//     }
//     if(j>=k){
//         median(s1,0,j-1,k);
//     }else if(j+n>=k){
//         return arr[index];
//     }else{
//         median(s3,0,m-1,k-(j+n));
//     }
// }

// int main(){
//     int size,k;
//     cout<<"enter the size of array : "<<endl;
//     cin>>size;
//     int *arr=new int[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
//     cout<<"enter the value of k : "<<endl;
//     cin>>k;
//     int element=median(arr,0,size-1,k);
//     cout<<k<<"th smallest element is : "<<element;

// }

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int findmajority(int arr[],int low,int high){
    if(low==high){
        return arr[low];
    }
    int mid=(low+high)/2;
    int leftmajority=findmajority(arr,low,mid);
    int rightmajority=findmajority(arr,mid+1,high);
    
    if(leftmajority==rightmajority){
        return leftmajority;
    }
    int leftcount=0;
    int rightcount=0;
    for(int i=low;i<=high;i++){
        if(arr[i]==leftmajority){
            leftcount++;
        }else if(arr[i]==rightmajority){
            rightcount++;
        }
    }
    if(leftcount>(high-low+1)/2){
        return leftmajority;
    }else if(rightcount>(high-low+1)/2){
        return rightmajority;
    }else{
        return -1;
    }

}
int ismajority(int arr[],int size,int result){
    int count=0;
    for(int i=0;i<size;i++){
        if(result==arr[i]){
            count++;
        }
    }
     return count>size/2;
}
int majority(int arr[],int size){
    int result=findmajority(arr,0,size-1);
    if(result!=-1&&ismajority(arr,size,result)){
        return result;
    }else{
        return -1;
    }
}

int main(){
    int size;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int result= majority(arr,size);
    if(result!=-1){
        cout<<"majority element is : "<<result;
    }else{
        cout<<"Non majority elemnt is found "<<endl;  
    }
}

