#include<bits/stdc++.h>
using namespace std;
main()
{
    int lim,num,large,slarge,i=0;
    cin>>lim;
    while(lim>0)
    {
        cin>>num;
        if (num > large)
        {
            slarge = large;
            large= num;
        }
        else if (num > slarge)
        {
            slarge = num;
        }
        else if(num==large==slarge)
        {
            slarge= INT_MIN;
        }
        lim--;

        
    }
    cout<<slarge;




}