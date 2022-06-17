#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=1;i<=((n/2)+1);i++)
    {
        for (int j=(((n/2)+1)-i);j>=1;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=(n/2);i>=1;i--)
    {
        for (int x=1;x<=((n/2)-i+1);x++)
        {
            cout<<" ";
        }
        for (int y=1;y<=(2*i-1);y++)
        {
            cout<<"*";
        }
        cout<<endl;

        
    }

    

}