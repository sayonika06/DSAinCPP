#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    bool flag=true;
    for ( i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag =false;
                break;
            }
           
        }
    if (flag)
    {
        cout<<"It is a prime number"<<endl;
    }
    else
    {
        cout<<"It is a composite number"<<endl;
    }
        
}
    
