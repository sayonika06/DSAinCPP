#include<bits/stdc++.h>
using namespace std;

// void prin(int arr[])
main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    //taking input
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int s=0;
        while(s=0)
        {
        for (int k=n-s;k>=n-1;k--)
        {
            for (int i=0;i<n;i++)
            {
                for (int j=0;j<m;j++)
                {
                    
                    cout<<arr[i][j]<<" ";
                        
                }
                cout<<endl;
            }
        }
        }
        s++;

}
