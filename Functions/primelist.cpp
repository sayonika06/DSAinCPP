#include<bits/stdc++.h>
using namespace std;

void ispr(int n)
{
    
    int i,j;
    
    for ( i=2;i<=n;i++)
    {
        
        int flag=0;
        for ( j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                flag=flag+1;
            }
            
        }
        if(flag==2)
        {
            cout<<i<<endl;
        }

    
    
    }
    
}
int main()
{
    int n;
    cin>>n;
    ispr(n);
    
}