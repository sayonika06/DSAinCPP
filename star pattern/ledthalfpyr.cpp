#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k=n;k>=1;k--)
    {
        for(int l=k;l>=1;l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}