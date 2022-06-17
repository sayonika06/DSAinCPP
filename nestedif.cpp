#include<iostream>
using namespace std;
main(){
    int number;
    cout<<"Enter the number:"<<endl;
    cin>> number;
    if (number!=0){
        if (number%2==0){
            cout<<"The number is even"<<endl;
        }
        else
        {
            cout<<"The number is odd"<<endl;
        }
        
    }
    else{
        cout<<"The number is zero"<<endl;
    }
}