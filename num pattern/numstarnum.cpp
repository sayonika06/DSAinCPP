#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=6-i;j++)
        {
            cout<<j;
        }
        for(int s=1; s<=2*(i-1);s++)
        {
            cout<<"*";
        }
        for(int k=6-i;k>=1;k--)
        {
            cout<<k;
        }
        cout<<endl;
    
    }
}