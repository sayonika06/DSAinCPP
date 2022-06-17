#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
    
        for(int k=n-i;k>=1;k--)
        {
            cout<<" ";
        }
        for (int j=i;j<=i+i-1;j++)
        {
            cout<<j;
        }
        for (int m=2*i-2;m>=i;m--)
        {
            cout<<m;
        }
        cout<<endl;
    }

}