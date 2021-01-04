#include <iostream>
using namespace std;
int findTrapWater(int arr[],int n);
int leftfind(int arr[],int n,int dartindex);
int rightfind(int arr[],int n,int dartindex);


int main() //testcase
{
    cout<<"[----------------------------------------------------------------------]"<<endl;
    int testarray[9]={4,9,0,4,0,1,7,5,10};
    int dummy=findTrapWater(testarray,sizeof(testarray)/sizeof(int));
    cout<<dummy;
    return 0;
};

int leftfind(int arr[],int n,int dartindex)
{
   int leftboundarg=0;
   for(int j=dartindex;j>=0;j--)
   {
       leftboundarg=max(leftboundarg,arr[j]);

   }; 
  return leftboundarg;
};

int rightfind(int arr[],int n,int dartindex)
{
   int rightboundarg=0;
   for(int j=dartindex;j<n;j++)
   {
       rightboundarg=max(rightboundarg,arr[j]);

   }; 
  
  return rightboundarg;
};



int findTrapWater(int arr[],int n)
{
    int totalwater=0;
    int leftbound=0;
    int rightbound=0;

    for(int i=1;i<n-1;i++) //ignoring the first & last elements of array
    {  
        leftbound=leftfind(arr,n,i);
        rightbound=rightfind(arr,n,i);
        totalwater+=(min(leftbound,rightbound)-arr[i]);
    }

    return totalwater;

};



