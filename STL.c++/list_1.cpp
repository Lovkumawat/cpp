#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;//list of 0 length
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(12);
    list1.push_back(9);
    display(list1);
    //REMOVE ELEMENT FROM THE LIST
    // list1.pop_back();//piche se ek elemt nikal lega
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(9);
    // display(list1);

    //SORTING THE LIST//
   // list1.sort();
   // display(list1);

     list<int> list2(3);//empty list of size 3
     list<int>::iterator iter;
     iter=list2.begin();
     *iter=45;
     iter++;
     *iter=6;
     iter++;
     *iter=2;
     display(list2);
    //  list1.sort();
    //  display(list1);
    //  list2.sort();
    //  display(list2);
    //  //MERGING OF LIST//
    //  list1.merge(list2);
    //  cout<<"list1 1 after merging: "<<endl;
    //  display(list1);
    //REVERSING THE LIST
    list1.reverse();
    display(list1);
     return 0;
}
// for more algorithem visit"cppreference list"