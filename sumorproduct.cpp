#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c;
    cin>>n;
    cin>>c;
    int sum=0,pro=1;
    if(c==1)
    {
        for(int i=1;i<=n;++i)
        {
            sum=sum+i;
        }
        cout<<sum;
    }
    else if(c==2)
    {
        for(int i=1;i<=n;++i)
        {
            pro=pro*i;
        }
        cout<<pro;
    }
    else
    {
        cout<<"-1";

    }

    
}