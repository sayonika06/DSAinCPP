#include <iostream>
using namespace std;

int main() {
    int number, terms,i;
    int sum = 0;
    cout<<"Enter how many numbers?:"<<endl;
    cin>>terms;

    do {
        if (i>terms)
        {
            cout<<"Enter the number"<<endl;
            cin>> number;
            i++;
            sum += number;
        }
        

        // take input from the user
        //cout << "Enter a number: ";
        //cin >> number;
    }
    while (number >= 0);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}