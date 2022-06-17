//factorial using funtion//
#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for (int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    fact(n);
    int answer=fact(n);
    cout<<answer<<endl;
}
