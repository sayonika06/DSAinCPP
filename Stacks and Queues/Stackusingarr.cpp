#include<bits/stdc++.h>
#include<climits>
using namespace std;
//static

class stackusingarray
{
    int *data;
    int nextIndex;
    int capacity;

    public:

    stackusingarray(int totalsize)
    {
        data=new int[totalsize];
        nextIndex=0;
        capacity= totalsize;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex==0;

    }

    void push(int element)
    {
        if(nextIndex==capacity)
        {
            cout<<"Stack full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    
    int pop()
    {
        if(nextIndex==0)
        {
            cout<<"Stack empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];

    }

    int top()
    {
        if(nextIndex==0)
        {
            cout<<"Stack empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }




    
};

int main()
{
    stackusingarray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    
    cout<<s.size()<<endl;

    cout<<s.isEmpty()<<endl;

}
