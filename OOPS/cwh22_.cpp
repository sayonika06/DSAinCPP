#include<bits/stdc++.h>
using namespace std;

class binary
{
    string s;
    public:
    void read(void);
    void chk_binary(void);
};

void binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_binary(void)
{
    for (int i=0;i<s.length() ;i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Not binary"<<endl;
            exit(0);
        }
        else
        {
            cout<<"Binary"<<endl;
            exit(0);
        }
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_binary();
}

