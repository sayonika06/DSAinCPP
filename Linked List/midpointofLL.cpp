#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node *takeinput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *newnode=new Node(data);
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=tail->next;

        }
        cin>>data;
    }
    return head;
}


Node *midpoint(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node *slow=head, *fast=head->next;
    while(fast!=NULL && fast->next !=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

void printll(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    Node *head=takeinput();
    printll(head);
    cout<<endl;
    Node *mid=midpoint(head);
    cout<<mid->data;

}