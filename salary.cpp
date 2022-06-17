#include<bits/stdc++.h>
using namespace std;
main()
{
    int basic;
    char grade;
    double totals;
    cin>>basic>>grade;
    if (grade=='A')
    {
        totals=basic+((0.2)*basic)+((0.5)*basic)+1700-((0.11)*basic);
        cout<<round(totals);
    }
    else if(grade=='B')
    {
        totals=basic+((0.2)*basic)+((0.5)*basic)+1500-((0.11)*basic);
        cout<<round(totals);
    } 
    else
    {
        totals=basic+((0.2)*basic)+((0.5)*basic)+1300-((0.11)*basic);
        cout<<round(totals);
    }
}