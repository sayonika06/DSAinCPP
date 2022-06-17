#include<iostream>
//to find sum of natural number 1,2,3...n//
using namespace std;
main(){
    int terms,sum;
    cout<<"Enter number if terms:";
    cin>>terms;
    for (int i=1; i<=terms;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum is:"<<sum;
}