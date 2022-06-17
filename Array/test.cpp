#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int x)
{
    int t;
    cin>>t;
    while(t--)
    {
        //Write your code here
        // int n;
        cin>>n;
        // int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        // int key;
        // cout<<"Enter the key you wnna search:";
        cin>>x;
        for (int i=0;i<n;i++)
        {
            if (arr[i]==x)
            {
                // cout<<"The key is in index:";
                cout<<i;
            }
            else
            {
                cout<<-1;
            }
        }
    }
}