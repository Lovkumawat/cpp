#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>vec1;
    int element,size;
    cout<<"enter the size of element"<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"enter an element to add to this vector";
        cin>>element;
        vec1.push_back(element);//element are entre in vector just line arrey
    }
    vec1.pop_back();//end wala elemnt nikal jata hai
    display(vec1);
    return 0;
}
//FOR MORE KEY WORDS VISIT "VECTOR C++ REFERENCE" 