#include<iostream>
//0 is false,1 is true//
using namespace std;
main(){
    int a=5, b=6;
    bool res;
    res=(a==b); //equal//
    cout<<"(a==b) is:"<< res<<endl;
    res=(a!=b);//not equal//
    cout<<"(a!=b) is:"<< res<<endl;
    res=(a<b);//less than//
    cout<<"(a<b) is"<< res<<endl;
    res=(a>b);//more than//
    cout<<"(a>b) is"<< res<<endl;
    res=(a<=b);//less than equal to//
    cout<<"(a<=b) is"<< res<<endl;
    res=(a>=b);//more than equal to//
    cout<<"(a>=b) is"<< res<<endl;
}