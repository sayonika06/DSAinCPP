#include<bits/stdc++.h>
using namespace std;

int printno(int n)
{
    if (n==0)
    {
        return n;
    }
    printno(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    printno(n);
}