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

void preorder(struct Treenode* root)
{
    //root- left subtree- right subtree
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(struct Treenode* root)
{
    //left subtree- root- right subtree
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(struct Treenode* root)
{
    //left subtree- root- right subtree
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

int main()
{
    struct Treenode* root=new Treenode(1);
    root->left=new Treenode(2);
    root->right=new Treenode(3);
    root->left->left=new Treenode(4);
    root->left->right=new Treenode(5);
    root->right->left=new Treenode(6);
    root->right->right=new Treenode(7);

    /*
             1
            / \
          2    3
         / \  / \
        4   5 6  7

    */
    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;




}