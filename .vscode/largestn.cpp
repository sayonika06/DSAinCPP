#include<bits/stdc++.h>
using namespace std;
main()
{
    int N;
    cin>>N;
    int CuN;
    cin>>CuN;
    int max= -10000, count=1;
    if (count<=N)
    {
        cin>>CuN;
        if (CuN>max)
        {
            max=CuN;
            count= count +1;
        }
        else
        {
            count= count +1;
        }
    }
    else
    {
        cout<<max<<endl;
    }
}