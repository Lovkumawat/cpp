#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
     cout<<"displaying this vector"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       // cout<<v.at(i)<<" ";
        //both are same
    }
    cout<<endl;
}
int main(){
    //ways to creat a vector
    vector<int>vec1;//zero lengthintrger vector vector
    vector<char>vec2(4);// 4-element cherecter vector
    vector<char>vec3(vec2);// 4-element charecter vector  form vec2
    vector<int>vec4(6,3);// 6-element vector of 3size
  // display(vec1);
   // vec2.push_back('5');
  // display(vec2);
    //display(vec3);
    display(vec4);
   // int element,size=5;;
    // cout<<"enter the size of element"<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"enter an element to add to this vector";
    //     cin>>element;
    //     vec1.push_back(element);//element are entre in vector just line arrey
    // }
    // //vec1.pop_back();//end wala elemnt nikal jata hai
    // display(vec1);
    // vector<int>::iterator iter=vec1.begin();
    // //vec1.insert(iter+1,5,599);
    // display(vec1);
    return 0;
}
//FOR MORE KEY WORDS VISIT "VECTOR C++ REFERENCE" 