#include<bits/stdc++.h>
using namespace std;
main()
{
    int N,i,j;
    cin>>N;
    for (i=1;i<=N;i++)
    {
        for ( j = i; j <= ((i*2)-1); j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }

}
