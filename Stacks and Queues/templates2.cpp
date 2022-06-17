#include<bits/stdc++.h>
using namespace std;
template <typename T,typename V>

class Pair
{
    T x;
    V y;

    public:

    void setX(T x)
    {
        this->x=x;
    }
    T getX()
    {
        return x;
    }

    void setY(V y)
    {
        this->y=y;
    }

    V getY()
    {
        return y;
    }
    


};

int main()
{

    Pair<int,double> p1;
    p1.setX(100);
    p1.setY(200.34);
    cout<<p1.getX()<<" "<<p1.getY()<<endl;


    Pair<Pair<int,int>, int> p2;
    p2.setY(30);
    Pair<int,int> p4;
    p4.setX(10);
    p4.setY(20);

    p2.setX(p4);

    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;


    // Pair<double> p2;
    // p2.setX(100.33);
    // p2.setY(20.45);
    // cout<<p2.getX()<<" "<<p2.getY();


}