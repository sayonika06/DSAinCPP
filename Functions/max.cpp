#include<bits/stdc++.h>
using namespace std;

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
main()
{
    int x,y;
    cin >>x>>y;
    cout<<max(x,y);

}