#include<bits/stdc++.h>
using namespace std;

int sumofn(int n)
{
    if(n==0)
    {
        return n;
    }
    return n+sumofn(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumofn(n);
}