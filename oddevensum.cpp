#include<bits/stdc++.h>
using namespace std;
main()
{
    int N;
    cin>>N;
    int sumeven=0, sumodd=0, rem;
    while(N>0)
    {
        
        rem=N%10;
        if(rem%2==0)
        {
            
            sumeven=sumeven+rem;
        }
        else
        {
            
            sumodd=sumodd+rem;
        }
        N=N/10;
        
    }
    cout<<sumeven<<" "<<sumodd;
}