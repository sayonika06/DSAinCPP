#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
    
}

int main(){
    int num;
    cout<<"Enter the no of terms you want to add:";
    cin>>num;

    fib(num);
    

}