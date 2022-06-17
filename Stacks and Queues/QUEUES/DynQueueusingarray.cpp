#include<bits/stdc++.h>
using namespace std;
template <typename T>
//dynamic

class Queueusingarray
{
    T* data;
    int nextindex;
    int firstindex;
    int size;
    int capacity;

    public:
    Queueusingarray(int s)
    {
        data=new T[s];
        nextindex=0;
        firstindex=-1;
        size=0;
        capacity=s;

    }

    int getsize()
    {
        return size;
    }

    int isempty()
    {
        return size==0;
    }

    //insert element
    void enqueue(T element)
    {
        if(size==capacity)
        {
           T *newdata= new T[2*capacity];
           int j=0;
           for (int i=firstindex;i<capacity;i++)
           {
               newdata[j]=data[i];
               j++;
           }
           for(int i=0;i<firstindex;i++)
           {
               newdata[j]=data[i];
               j++;
           }
           delete [] data;
           data=newdata;
           firstindex=0;
           nextindex=capacity;
           capacity=capacity*2;
        }
        data[nextindex]=element;
        nextindex=(nextindex+1)%capacity;
        if(firstindex==-1)
        {
            firstindex=0;
        }
        size++;
    }

    T front()
    {
        if(isempty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[firstindex];
    }

    T dequeue()
    {
        if(isempty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        T ans=data[firstindex];
        firstindex=(firstindex+1)%capacity;
        size--;
        //reseting after queue is empty
        if(size==0)
        {
            firstindex=-1;
            nextindex=0;
        }
        return ans;
    }
};


int main()
{
    Queueusingarray<int> q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getsize()<<endl;
    cout<<q.isempty()<<endl;
}