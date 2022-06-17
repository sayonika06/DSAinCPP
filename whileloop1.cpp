#include<iostream>
//Sum of positive numbers//
using namespace std;
main()
{   int terms,i, number,sum=0;
    cout<<"Enter how many numbers?:"<<endl;
    cin>>terms;
    while(i<terms)
    {
        cout<<"Enter the number"<<endl;
        cin>> number;
        i++;
        if (number>=0)
        {
            sum=sum+number;
        }
    }
    cout<<"sum is:"<<sum<<endl;
}