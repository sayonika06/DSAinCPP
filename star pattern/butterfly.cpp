#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for (int k=2*n-2*i;k>=1;k--)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for (int i=n;i>=1;i--)
    {
        for (int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        for (int k=1;k<=2*n-2*i;k++)
        {
            cout<<" ";
        }
        for (int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}