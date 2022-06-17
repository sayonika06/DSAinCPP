#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int flag=0;
    for (int i=1;i<=n;i++ )
    {
        if(n%i==0)
        {
            flag=flag+1;
        }
    }
    if(flag==2)
    {
        cout<<"Yes it is prime";
    }
}