#include<bits/stdc++.h>
using namespace std;

struct Treenode
{
    int data;
    struct Treenode* left;
    struct Treenode* right;

    Treenode (int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

int search (int inorder[], int start,int end, int curr)
{
    for (int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}

struct Treenode* buildTree(int preorder[], int inorder[], int start, int end)
{
    static int index=0;
    if(start>end)
    {
        return NULL;
    }
    int curr= preorder[index];
    index++;

    Treenode* node= new Treenode(curr);
    if(start==end)
    {
        return node;
    }

    int pos=search(inorder, start, end,curr);
    node->left=buildTree(preorder,inorder, start, pos-1);
    node->right=buildTree(preorder,inorder, pos+1, end);

    return node;

}

void inorderprint(Treenode* root)
{
    if(root==NULL)
    {
        return;
    }
   inorderprint(root->left);
   cout<<root->data<<" ";
    inorderprint(root->right);
}

int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    
    //build tree
    Treenode* root= buildTree(preorder,inorder,0,4);
    inorderprint(root);

}