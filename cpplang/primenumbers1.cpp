#include <iostream>
#include <cmath>


using namespace std;

//timecomplexity-0(sqrt(n))
bool primaltest(int);

int main(){
    int givennumber;
    bool result;
    cout<<"Code Executing........................";
    cin>>givennumber;
    result=primaltest(givennumber);
    cout<<result;
}
bool primaltest(int n){
    for(int i=2;i<=sqrt(n);i++){    
        if (n%i==0) return false;
    }
    return true;
}