#include<bits/stdc++.h> 
using namespace std;

class Employee
{
    private:

    int a,b,c;

    public:

    int d,e;

    void readData(void);    //declaration

    

    void getData()
    {
        cout<<" a is "<<a<<endl;
        cout<<" b is "<<b<<endl;
        cout<<" c is "<<c<<endl;
        cout<<" d is "<<d<<endl;
        cout<<" e is "<<e<<endl;

    }
};


void Employee :: readData(void )
{
   cout<<"Enter a,b,c : "<<endl;
   cin>>a;
   cin>>b;
   cin>>c;
};

int main()
{
    Employee sayonika;
    sayonika.readData(); //setting priv a,b,c

    sayonika.d=45;    //setting d and e
    sayonika.e=56;
    sayonika.getData();
    return 0;
}