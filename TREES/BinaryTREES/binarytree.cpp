#include<bits/stdc++.h>
using namespace std;
//apni kaksha

struct TreeNode
{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

int main()
{
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right =new TreeNode(3);

    /*
            1
           / \
          2   3

    */
    root->left->left=new TreeNode(4);
    root->left->right =new TreeNode(5);
    /*
            1
           / \
          2   3
         / \
        4   5

    */


}