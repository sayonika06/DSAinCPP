#include<bits/stdc++.h>
using namespace std;
main()
{
    int x,ap,count=0;
    cin>>x;
    int n=1;
    while(count<=x-1)
    {
        ap=3*n+2;
        if(ap%4!=0)
        {
            cout<<ap<<" ";
            count=count+1;
        }
        n++;
    }
}