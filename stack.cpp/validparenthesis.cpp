#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
// bool validparenthesis(string s){
//     stack<char>st;
//     for(int i=0;i<s.size();i++){
//         char ch=s[i];
//         if(ch=='('||ch=='{'||ch=='['){
//             st.push(ch);
//         }else{
//             if(!st.empty()){
//                 char top=st.top();
//                 if((top=='('&& ch==')')||(top=='{'&&ch=='}')||(top=='['&&ch==']')){ // validparenthesis //
//                     st.pop();
//                 }else{
//                     return false;
//                 }
//             }else{
//                 return false;
//             }
//         }
//     }
//     if(s.empty()){
//         return true;
//     }else{
//         return false;
//     }
// }

bool isValidParenthesis(string expression)
{
  	 stack<char> s;
     for(int i=0; i<expression.length(); i++) {
         
         char ch = expression[i];
         
         //if opening bracket, stack push
         //if close bracket, stacktop check and pop
         
         if(ch == '(' || ch == '{' || ch == '['){
             s.push(ch);
         }
         else
         {
             //for closing bracket
             if(!s.empty()) {
                  char top = s.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      s.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
    
    if(s.empty())
        return true;
    else
        return false;
}

int main(){
    string s;
    cin>>s;
if(isValidParenthesis(s)){
    cout<<"validparenthesis ";

}else{
    cout<<"not a validparenthesis ";
}
  
    return 0;
}