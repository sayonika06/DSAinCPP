#include<iostream>
/* &&- res1 if all 1
    ||- res 1 if atleast one is 1
    !- res 1 if operand is false
*/
using namespace std;
main(){
    int a=5,b=6;
    bool res;
    res= (a!=b)&&(a<b);//Both conditions are true//
    cout<<"(a!=b)&&(a<b) is:"<<res<<endl;
    res= (a!=b)&&(a>b);//one is true and ine is false//
    cout<<"(a!=b)&&(a>b) is:"<<res<<endl;
    res= (a==b)&&(a>b);//both are false//
    cout<<"(a==b)&&(a>b) is:"<<res<<endl;

    res= (a!=b)||(a<b);//Both conditions are true//
    cout<<"(a!=b)||(a<b) is:"<<res<<endl;
     res= (a!=b)||(a>b);//one is true and ine is false//
    cout<<"(a!=b)||(a>b) is:"<<res<<endl;
    res= (a==b)||(a>b);//both are false//
    cout<<"(a==b)||(a>b) is:"<<res<<endl;

    res= ! (a>b); //true//
    cout<<"! (a>b) is:"<<res<<endl;
    res= ! (a==a); //false//
    cout<<"! (a==a) is:"<<res<<endl;

}