#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n)
{
    int current,j;
    for (int i=1;i<n;i++)
    {
        current=arr[i];
        j=i-1;

        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
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
    InsertionSort(array,n);
    for (int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}