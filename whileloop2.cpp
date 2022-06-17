#include<iostream>
//Sum of positive numbers//
using namespace std;
main()
{   int terms,i, number,sum=0;
    cout<<"Enter how many numbers?:"<<endl;
    cin>>terms;
    while(i<terms & number>=0)
    {
        cout<<"Enter the number"<<endl;
        cin>> number;
        i++;
        
        sum=sum+number;
        
    }
    cout<<"sum is:"<<sum<<endl;
}