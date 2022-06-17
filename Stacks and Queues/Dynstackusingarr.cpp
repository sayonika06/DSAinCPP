#include<bits/stdc++.h>
#include<climits>
using namespace std;
//dynamic

class stackusingarray
{
    int *data;
    int nextIndex;
    int capacity;

    public:

    stackusingarray()
    {
        data=new int[4];
        nextIndex=0;
        capacity= 4;
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
        // if(nextIndex==capacity)
        // {
        //     cout<<"Stack full"<<endl;
        //     return;
        // }

        if(nextIndex==capacity)
        {
            int *newdata=new int[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            capacity=capacity*2;
            delete [] data;
            data=newdata;
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
    stackusingarray s;
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
