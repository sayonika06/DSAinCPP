#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

void printLL(Node *head)
{
    Node *temp=head; //storing head into a temporary variable so thta head can be used later 
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    //this way head won't get lost
    
}

int main()
{
    Node n1(1);
    Node *head=&n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    
    printLL(head);
}
