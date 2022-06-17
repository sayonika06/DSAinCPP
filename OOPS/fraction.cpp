#include <bits/stdc++.h>

using namespace std;

class fraction{
    private:
    int num;
    int den;
    public:
    
    fraction(int num,int den)
    {
        this->num=num;
        this->den=den;
    }
    void print()
    {
        cout<<this->num<<"/"<<this->den<<endl;
    }
    
    void simplify()
    {
        int gcd=1;
        int j=min(this->num,this->den);
        for(int i=1;i<=j;i++)
        {
            if ((this->num%i==0)&&(this->den%i==0))
            {
                gcd=i;
            }
        }
        this->num=this->num/gcd;
        this->den=this->den/gcd;
        
    }
    
    
    void addfrac(fraction f2)
    {
        int lcm=(this->den)* (f2.den);
        int x=lcm/(this->den);
        int y=lcm/(f2.den);
        int n=((this->num)*x)+((f2.num)*y);
        num=n;
        den=lcm;
        simplify();
        
    }
};

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    
    f1.addfrac(f2);
    
    f1.print();
    f2.print();
    
}
