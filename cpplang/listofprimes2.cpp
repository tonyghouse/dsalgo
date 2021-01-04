#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
//Prime numbers using seive of erasthanous algorithm

int main(){
    int n;
    cout<<"Enter the number upto which prime numbers to be printed:";
    cin>>n;
    bool primearray[n+1];    //In we represent keys as number values as bool
    memset(primearray,true,sizeof(primearray));   //Initially all numbers are set to be primes

    for(int p=2;p*p<=n;p++){

        //if primearray[p] is not changed then it is prime

        if(primearray[p]==true){

            for(int j=2*p;j<=n;j+=p) //multiples of number p
            {
                primearray[j]=false;  //making multiples of number p as false bif that number is prime
            }

        }
    }

    for(int k=2;k<=n;k++){   //0(n)
        if(primearray[k]==true){    //0(1)
            cout<<k<<" ";
        }
    }


}