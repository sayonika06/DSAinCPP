#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=n;i>=1;i--)
    {
        for (int j=i;j>=1;j--)
        {
            char ch=('A'+n-i);
            cout<<ch;
        }
        cout<<endl;
    }
}