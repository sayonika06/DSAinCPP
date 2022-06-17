#include<bits/stdc++.h> 
using namespace std;

class Employee
{
    private:

    int a,b,c;

    public:

    int d,e;

    void setData(int a1, int b1, int c1);    //declaration

    

    void getData()
    {
        cout<<" a is "<<a<<endl;
        cout<<" b is "<<b<<endl;
        cout<<" c is "<<c<<endl;
        cout<<" d is "<<d<<endl;
        cout<<" e is "<<e<<endl;

    }
};


void Employee :: setData(int a1,int b1,int c1 )
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee sayonika;
    sayonika.setData(2,3,4); //setting priv a,b,c

    sayonika.d=45;    //setting d and e
    sayonika.e=56;
    sayonika.getData();
    return 0;
}