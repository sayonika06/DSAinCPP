//In C++, the code of function declaration should be before the function call. However, if we want to define a function after the function call, we need to use the function prototype. //
#include<iostream>
using namespace std;

void fib(int); //funtion prototype

int main(){
    int n;
    cout<<"Enter the no of terms you want to add:";
    cin>>n;

    fib(n);
    

}

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
