#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>vec1; //CONTANIER
    int element,size;
    cout<<"enter the size of element"<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"enter an element to add to this vector";
        cin>>element;
        vec1.push_back(element);//element are entre in vector just line arrey    /ALGORITHEM
    }
    display(vec1);
    vector<int>::iterator itr =vec1.begin();     //ITERATOR
    //vec1.insert(itr,22);
   // display(vec1);

sort(vec1.begin(),vec1.end());
display(vec1);


    return 0;
}
//FOR MORE KEY WORDS VISIT "VECTOR C++ REFERENCE" 