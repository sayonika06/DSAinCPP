#include<iostream>
#include<climits>
using namespace std;
main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<endl;
    int min=INT_MAX;
    for (int i=0;i<n;i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }

    }
    cout<<min<<endl;
    
}