#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
    public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data=data;
        next=NULL;

    }
};

template<typename T>
class StackusingLL
{
    Node<T> *head;
    int size;
    public:
    StackusingLL()
    {
        head=NULL;
        size=0;

    }

    int getsize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void push (T element)
    {
        Node<T> *newnode=new Node<T>(element);
        newnode->next=head;
        head=newnode;
        size++;
    }

    T pop()
    {
        if(isEmpty())
        {
            return 0;
        }
        T ans=head->data;
        Node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;

    }

    T top()
    {
        if(isEmpty())
        {
            return 0;
        }
        return head->data;
    }
};

int main()
{
    StackusingLL<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    
    cout<<s.getsize()<<endl;

    cout<<s.isEmpty()<<endl;
}