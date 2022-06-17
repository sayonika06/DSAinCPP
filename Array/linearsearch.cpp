#include<iostream>
using namespace std;

int LinearSearch(int array[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if (array[i]==key)
        {
            cout<<"The key is in index:";
            return i;
        }
        else{
            return -1;
        }
    }
    // return -1;
}

main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int key;
    cout<<"Enter the key you wnna search:";
    cin>>key;

    cout<<LinearSearch(array,n,key)<<endl;
    

}