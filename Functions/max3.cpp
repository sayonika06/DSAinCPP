#include<bits/stdc++.h>
using namespace std;

int max(int x,int y, int z)
{
    if((x>y) && (x>z))
    {
        return x;
    }
    else if((y>x)&&(y>z))
    {
        return y;
    }
    else{
        return z;
    }
}
main()
{
    int x,y,z;
    cin >>x>>y>>z;
    cout<<max(x,y,z);

}