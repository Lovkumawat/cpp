#include<iostream>
#include<stack>
using namespace std;
bool isreduntant(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='('||ch=='*'||ch=='-'||ch=='+'||ch=='/'){ // reduntant bracket //
        st.push(ch);
        }else{
            if(ch==')'){
                 bool reduntant=true;
                 while(st.top()!='('){
                    char top=st.top();
                    if(top=='*'||top=='-'||top=='+'||top=='/'){
                        reduntant=false;
                    }
                    st.pop();
                 }
                 if(reduntant==true)
                    return true;
                    st.pop();
            }
        }
    }
    return false;
}
int main(){
   string s;
   cin>>s;
   if(isreduntant(s)){
    cout<<"reduntant ";
   }else{
    cout<<"not an reduntant ";
   } 
    


    return 0;
}