#include <bits/stdc++.h>
using namespace std;

int main()
{
    //dynamically
    // vector<int> *vp= new vector<int>();
    //statically
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //we can change 
    v[1]=100;

    //this will give a garbage value
    v[3]=1002;
    v[4]=1005;
    //Thus use square bracket only to get or update, not for inserting elements

    v.push_back(40);
    v.push_back(50);

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;  //4thpushback(40)
    cout<<v[4]<<endl;  //5thpushback(50)
    cout<<v[5]<<endl;  //these will throw garbage
    cout<<v[6]<<endl;  //these will throw garbage
    cout<<v[7]<<endl;  //these will throw garbage

    //alternate OF square brackets

    cout<<v.at(2)<<endl;
    // cout<<v.at(7)<<endl; // wont throw garbage but show an error
    //that means this method is safer

    //to delete the last element
    v.pop_back();

    //size() function
    
    cout<<"Size: "<<v.size()<<endl;

    //using loop
    
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    

    
}