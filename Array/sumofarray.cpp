#include<iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum +array[i];
    }
    int total=sum;
    cout<<total;

    
}