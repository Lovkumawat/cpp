//for more details visit "cppreference"
#include<iostream>
#include<map>
using namespace std;
//MAP IS AN ASSOCIATIVE ARRAY
int main(){
    map<string,int>marksmap;//<key,value>
    marksmap["harry"]=98;
    marksmap["jack"]=59;
   // marksmap["rohan"]=2;
    marksmap.insert({{"lov",9},{"saloni",12}});
    map<string,int>::iterator itr;
    for(itr=marksmap.begin();itr!=marksmap.end();itr++){
      cout<<(*itr).first<<" "<<(*itr).second<<"\n";  
    }
    cout<<"the size is: "<<marksmap.size()<<endl;
    cout<<"the max size is:"<<marksmap.max_size()<<endl;
    marksmap.clear();
    cout<<"the empty return value is:"<<marksmap.empty()<<endl;
    //cout<<"the value is"<<marksmap.clear()<<endl;
    return 0;
}