#include<bits/stdc++.h>
using namespace std;
main()
{
    int N, sum=0, i=0;
    cin>>N;

    while (i<=N)
    {
        if ((i%2)==0)
        {
            sum+=i;
            i++;
        }
        
    }
    cout<<sum<<endl;
}
