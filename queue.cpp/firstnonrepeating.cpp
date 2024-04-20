// first non - repeating element in stream //
#include<iostream>
#include<queue>
#include<string>
#include<map>

using namespace std;
string firstnonrepeating(string s){
    map<char,int> count;
    string ans="";
    queue<int> q;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        count[ch]++;
        q.push(ch);
        while(!q.empty()){
            if(count[q.front()]>1){
                q.pop();

            }else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}
int main(){
    string s;
   cout<<"enter the value of string : ";
   cin>>s;
  string answer= firstnonrepeating(s);
  for(int i=0;i<answer.size();i++){
    cout<<answer[i]<<" ";
  }
    return 0;

}