//own method
#include <bits/stdc++.h>
using namespace std;

void bubblesort(int array[],int n)
{
    for (int i=1;i<=n-1;++i)
    {
        for (int j=0;j<n-i;++j)
        {
            if (array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    bubblesort(array,n);
    for (int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
