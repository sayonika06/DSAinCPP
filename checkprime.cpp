//Check if the no is prime using funtion//
#include<iostream>
using namespace std;

void isprime( int num){
    int flag;
    for(int i=2;i<=num/2;i++){
        if (num%i==0){
            flag=1;
            break;
           
        }
        
    }
    if (flag==1){
        cout<<"It is not a composite number"<<endl;
    }
    else {
        cout<<"It is a prime number"<<endl;
   
    }
}
int main(){
    int num;
    
    cout<<"Enter the number to check:"<<endl;
    cin>>num;
    isprime(num);
    
    return 0;
}