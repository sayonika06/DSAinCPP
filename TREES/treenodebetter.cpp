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

TreeNode<int>* takeinputlevelwise()
{
    int rootdata;
    cout<<"Enter root data: ";
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int> (rootdata);
    queue<TreeNode<int>*> pendingnodes;

    pendingnodes.push(root);

    while(pendingnodes.size()!=0)
    {
        TreeNode<int>* front =pendingnodes.front();
        pendingnodes.pop();
        int numchild;
        cin>>numchild;
        for (int i=0;i<numchild;i++)
        {
            int childdata;
            cin>>childdata;
            TreeNode<int>* child= new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;

}

void printTree(TreeNode<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data;
    
}


    
int main()
{
    TreeNode<int>* root= takeinputlevelwise();
    printTree(root);
}