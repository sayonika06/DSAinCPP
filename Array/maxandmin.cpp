#include<iostream>

using namespace std;
main()
{
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int maxNo=array[0];
    
    for(int i=0;i<n;i++)
    
    {
        if(array[i]>maxNo)
        {
            maxNo=array[i];
        }
        
    }
    int minNo=array[0];
    
    for(int i=0;i<n;i++)
    {
        if(array[i]<minNo)
        {
            minNo=array[i];
        }
    }

    cout<<maxNo<<endl;
    cout<<minNo<<endl;
    return 0;
}
