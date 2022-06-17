#include<bits/stdc++.h>
using namespace std;

//create a class

class student{
    public:
    int rollno;
    int age;
};

int main()
{
    //create object statically 
    student s1;
    student s2;

    //assigning value
    s1.age=24;
    s1.rollno=9;
    s2.age=22;
    s2.rollno=8;
    
    //printing them 
    cout<<s1.age<<endl;
    cout<<s2.age<<endl;
    cout<<s1.rollno<<endl;
    cout<<s2.rollno<<endl;

    //create object dynamically
    student *s3= new student;

    //assigning value
    (*s3).age= 23;
    //OR 
    // s3->age=23;

    s3->rollno=32;

    //printing them 
    cout<<s3->age<<endl;
    cout<<s3->rollno<<endl;
    

}