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
        for (int j=i;j>=1;j--)
        {
            cout<<j;
        }
        while(i>=2)
        {
            for (int l=2;l<=i;l++)
            {
                cout<<l;
               
            }
            break;
        }
        
        
        cout<<endl;
    }
}