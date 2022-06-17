#include<iostream>
using namespace std;
main(){
    int number;
    cout<<"Enter the number:"<<endl;
    cin>> number;
    if (number>0)
    {
        cout<<"It is POSITIVE NUMBER"<<endl;
    }
    else if(number<0)
    {
        cout<<"It is NEGATIVE NUMBER"<<endl;
    }
    else {
        cout << "You entered ZERO"<<endl ;
    }
    cout << "This statement is always executed.";
    return 0;
}