#include<bits/stdc++.h>
#include<climits>
using namespace std;
template<typename T>
//dynamic

class stackusingarray
{
    T *data;
    int nextIndex;
    int capacity;

    public:

    stackusingarray()
    {
        data=new T[4];
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

    void push(T element)
    {
        // if(nextIndex==capacity)
        // {
        //     cout<<"Stack full"<<endl;
        //     return;
        // }

        if(nextIndex==capacity)
        {
            T *newdata=new T[2*capacity];
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
    
    T pop()
    {
        if(nextIndex==0)
        {
            cout<<"Stack empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];

    }

    T top()
    {
        if(nextIndex==0)
        {
            cout<<"Stack empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }




    
};

int main()
{
    stackusingarray<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    
    cout<<s.size()<<endl;

    cout<<s.isEmpty()<<endl;

}
