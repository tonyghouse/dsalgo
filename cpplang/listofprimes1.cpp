#include <iostream>
#include <cmath>
// method1 without seive algorithm
using namespace std;
void primaltest(int n);
int main(){
    int lastnumber;
    cout<<"Enter the number upto which prime numbers to be printed:";
    std::cin>>lastnumber;
    primaltest(lastnumber);
}
void primaltest(int n){
    for(int i=2;i<=n;i++){//just to traverse to the end
     int isprime=1;
     for(int j=2;j<=sqrt(i);j++){//to check whether number is prime or not
       if(i%j==0){
         isprime=0;
         break;
      }
       else{
         isprime=1;
         }   
             }
    
      if(isprime==1)
      {
     cout<<i<<"\t";
          }

    }
}