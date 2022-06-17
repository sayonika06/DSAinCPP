#include<bits/stdc++.h>
using namespace std;

int noofdigits(int n)
{
    if(n==0)
    {
        return n;
    }
    int no=noofdigits(n/10);
    return no+1;
}

int main()
{
    int n;
    cin>>n;
    cout<<noofdigits(n);
}