#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int rem,fin;
    while(n>0)
    {
        rem=n%10;
        fin=fin*10+rem;
        
        n=n/10;
    }
    cout<<fin;
}