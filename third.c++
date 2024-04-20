#include<iostream>
using namespace std;
void search(string s1[],string s2[0],int size){
    for(int i=0;i<size;i++){
        if(s1[i]==s2[0]){
            cout<<"string is present at index : "<<i;
            return ;
        }
    }
    cout<<"string is not present : "<<endl;
}
int main(){
      int size;
       cout<<"enter th size of string : ";
    cin>>size;
    string s1[size];

   
    cout<<"enter the value in string 1 : "<<endl;
    for(int i=0;i<size;i++){
        cin>>s1[i];
    }
    cout<<"enter th evalue in string 2 : ";
    string s2[1];
    cin>>s2[0];
    search(s1,s2,size);
    return 0;
}