#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=n;i>=1;i--)
    {
        for (int k=n-i;k>=1;k--)
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