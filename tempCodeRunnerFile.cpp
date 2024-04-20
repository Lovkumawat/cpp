#include<iostream>
using namespace std;
class w{
    public:
    int a;
};
void setdata(int x){
    int a=5;
}
void getdata(){
    cout<<a;
}
int main(){
    setdata(5);
    getdata();
}
