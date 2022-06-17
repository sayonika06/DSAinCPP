#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for (int k=n-i;k>=1;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
} 
