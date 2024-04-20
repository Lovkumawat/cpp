#include<iostream>
#include<string.h>

using namespace std;
void checkpalindrome(string s,int l){
    string t;
    t=s;
    int start=0;
    int end=l-1;
    while(start<=end){                              // string is pelendrome//
        swap(t[start++],t[end--]);

    }
    int c=0;
    for(int i=0;i<l;i++){
        if(t[i]==s[i]){
            c++;
        }
    }
    if(c==l){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not a palindrome "<<endl;
    }
}
int main(){
string s;
cout<<"enter the string "<<endl;
    cin>>s;
    int l=s.length();
    
    checkpalindrome(s,l);


}
