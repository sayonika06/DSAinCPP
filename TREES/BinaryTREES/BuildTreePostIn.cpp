#include<bits/stdc++.h>
using namespace std;

struct Treenode
{
    int data;
    struct Treenode* left;
    struct Treenode* right;

    Treenode(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[],int start, int end, int curr)
{
    for (int i=start;i<=end;i++)
    {
        if (inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}

struct Treenode*  buildtree(int postorder[], int inorder[], int start, int end)
{
    static int index=4;
     if (start > end)
    {
        return NULL;
    }

    int curr=postorder[index];
    index--;
    Treenode* node=new Treenode(curr);
    if(start==end)
    {
        return node;
    }
    int pos=search(inorder,start,end,curr);
    node->right=buildtree(postorder,inorder,pos+1,end);
    node->left=buildtree(postorder,inorder,start,pos-1);

    return node;
}

void printin(Treenode* root)
{
    if (root==NULL)
    {
        return;
    }
    printin(root->left);
    cout<<root->data<<" ";
    printin(root->right);
}

int main()
{
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};

    Treenode* root=buildtree(postorder,inorder, 0,4);
    printin(root);

}