#include<iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
    cout<<endl;
    }
}