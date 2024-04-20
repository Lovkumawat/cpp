// JAI SHREE RAM //
#include<iostream>
//#include<limits.h>
#include<vector>
using namespace std;
vector<int> findintersection(vector<int>&vec1,vector<int> &vec2 ,int size1,int size2){ // find intersection //
    vector<int> ans;
    for(int i=0;i<size1;i++){
        int element=vec1[i];
        //cout<<element<<"   ";
        for(int j=0;j<size2;j++){
            if(element<vec2[j])
                break;
            
            if(element==vec2[j]){
               // cout<<element<<" ";
                ans.push_back(element);
                vec2[j]= -1;
                break;
            }
        }
    }
    return ans;
}
int main(){
    int size1,size2;
    cout<<"enter the size of both vector : ";
    cin>>size1>>size2;
    int d;
    vector<int> vec1;
    vector<int> vec2;
    cout<<"enter the value in 1st vector : "<<endl;
    for(int i=0;i<size1;i++){
        cin>>d;
        vec1.push_back(d);
    }
     cout<<"enter the value in 2nd vector : "<<endl;
    for(int i=0;i<size2;i++){
        cin>>d;
        vec2.push_back(d);
    }
    for(int i=0;i<size1;i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size2;i++){
        cout<<vec2[i]<<" ";
    }

    vector<int> vec3;

   vec3= findintersection(vec1,vec2,size1,size2);
   for(int i=0;i<vec3.size();i++){
    cout<<vec3[i]<<" ";
   }

    return 0;
}