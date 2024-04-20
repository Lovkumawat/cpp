#include<iostream>
#include<math.h>
using namespace std;
int main(){   
    //  DECIMAL TO BINARY//              
    int answer=0;
    int n;
    int i=0;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
        int bit =n&1;
     
        answer=((bit*(pow(10,i)))+answer);
      cout<<answer;
             n=n>>1;
           i++;
    }
    cout<<"answer is : "<<answer;
}

//     // BINARY TO DECIMAL //
//    int n;
//    cout<<"enter the number : ";
//    cin>>n;
//    int i=0;
//    int sum=0;
//    while(n!=0){
//     int digit=n%10;
//     if(digit==1){
//   sum=sum+pow(2,i);
//     }
//     n=n/10;
//     i++;
//    }
//    cout<<"answer is : "<<sum;

//     return 0;
// }
