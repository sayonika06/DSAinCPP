#include<bits/stdc++.h>
using namespace std;
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
    //printing
    cout<<"MATRIX IS:"<<"\n";
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    //checking whether an element id present or not and if yes print its ps
    int x;
    cin>>x;
    bool flag=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<i<<" "<<j<<endl;
                flag=1;
            }
            else{
                flag=0;
            }

        }
        cout<<endl;
    }
    if(flag==1)
    {
        cout<<"found;";
    }
    else{
        cout<<"not found";
    }
}