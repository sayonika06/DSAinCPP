#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int num){
    for (int i=2;i<=num/2;i++){
        if (num%i==0){
            return false;
        }
        
    }
    return true;
}

int main(){
    int a,n;
    cin>>a>>n;
    for ( int i=a;i<=n;i++){
        if (isprime(i)){
            cout<<i<<endl;
        }
    }

}