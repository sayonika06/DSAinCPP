#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int k=i;
        for (int j=1;j<=i;j++,k++)
        {
            char ch=k+64;
            cout<<ch; 
        }
        cout<<endl;
    }
}