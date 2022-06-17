#include<bits/stdc++.h>
using namespace std;
template<typename T>

class TreeNode
{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data)
    {
        this->data=data;
    }

};

TreeNode<int>* takeinput()
{
    int rootdata;
    cout<<"Enter data:";
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int> (rootdata);

    int n;
    cout<<"Enter number of children of"<< rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child= takeinput();
        root->children.push_back(child);
    }

    return root;


}


void printtree(TreeNode<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<< root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printtree(root->children[i]);

    }

}

int main()
{
    // TreeNode<int>* root= new TreeNode<int>(1);
    // TreeNode<int>* node1= new TreeNode<int>(2);
    // TreeNode<int>* node2= new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int>* root= takeinput();
    printtree(root);

}