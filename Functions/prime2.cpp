#include<bits/stdc++.h>
using namespace std;

void ispr(int n)
{
    int flag=0;
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=flag+1;
        }
    }
    if(flag==2)
    {
        cout<<"IS PRIME";
    }
    else
    {
        cout<<"NOT PRIME";
    }
    

}
int main()
{
    int n;
    cin>>n;
    ispr(n);
    
}