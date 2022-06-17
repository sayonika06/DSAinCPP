//Taking array input//
#include<iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    int array[n];
    cout<<"Enter the numbers:"<<endl;
    for(int i=0;i<n;++i){
        cin>>array[i];

    }
    cout<<"The numbers are:"<<endl;
    for(int i=0;i<n;++i){
        cout<<array[i]<<" ";

    }
}