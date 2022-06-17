//sayo
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

Node *takeinput()
{
    int data;
    cin>>data;
    // string choice;
    // cout<<"Enter your choice(yes/no): ";
    // cin>> choice;
    
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    // if(choice=="yes")
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head= newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
        // cout<<endl;
        // cout<<"Do you want to continue?(yes/no): ";
        // cin>>choice;

    }
    return head;
}

Node *insertnode(Node *head, int i,int data)
{
    Node *newnode=new Node(data);
    int count=0;
    Node *temp=head;
    
    if (i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    // first receive the adress of the i-1 node to start connecting 
    while(temp!=NULL && count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        Node *a=temp->next;
        temp->next=newnode;
        newnode->next=a;
    }
    return head;
}

Node *deletenode(Node *head, int index)
{
    int count=0;
    Node *temp=head;

    while(index==0)
    {
        return head->next;
    }
     while(temp!=NULL && count<index-1)
    {
        temp=temp->next;
        count++;
    }
    if (temp!=NULL)
    {
        Node *a=temp->next;
        Node *b=a->next;
        temp->next=b;

        delete a;
    }
    return head;
}

void print (Node *head)
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
    print(head);
    int i,data;
    cin>>i>>data;
    head=insertnode(head,i,data);
    print(head);
    int index;
    cin>>index;
    head=deletenode(head,index);
    print(head);
}

