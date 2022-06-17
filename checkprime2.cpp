#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    int flag;
    for ( i=2;i<n;i++)
        {
            if(n%i!=0)
            {
                flag =1;
                break;
            }
            else
            {
                flag= 0;
                break;
            }
           
        }
    if (flag==1)
    {
        cout<<"It is a prime number"<<endl;
    }
    else if(flag==0)
    {
        cout<<"It is a composite number"<<endl;
    }
        
}
    
