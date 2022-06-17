#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int k=n-i;k>=1;k--)
        {
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=n;i>=1;i--)
    {
        for(int m=n-i;m>=1;m--)
        {
            cout<<" ";
        }
        for(int q=2*i-1;q>=1;q--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}