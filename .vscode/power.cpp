#include<bits/stdc++.h>
using namespace std;
main()
{
    int x,n;
    cin>>x>>n;
    int power=1,i;
    for (i=0;i<n;i++)
    {
        power=power*x;
    }
    cout<<power;
}