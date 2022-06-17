
#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

void reverseEachWord(char input[]) {
    // Write your code here
    //To find the length of string
        int len=strlen(input);
 
        //To reverse whole string
        for(int i=0;i<(len/2);i++)
        {
                int temp=input[i];
                input[i]=input[len-1-i];
                input[len-1-i]=temp;
        }
        

}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
