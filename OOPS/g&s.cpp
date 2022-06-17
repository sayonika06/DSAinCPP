#include<bits/stdc++.h>
using namespace std;

//create a class

class student{
    public:
    int rollno;

    private:
    int age;

    public:
    void display()
    {
        cout<<age<<" "<<rollno<<endl;
    }
    int getage()
    {
        return age;
    }
};

int main()
{
    //create object statically 
    student s1;
    

    //assigning value
    
    s1.rollno=9;
    
    
    //printing them 
    cout<<"S1 age:"<<s1.getage()<<endl;
    
    cout<<"S1 ROLLNO:"<<s1.rollno<<endl;

    s1.display();

    //create object dynamically
    student *s3= new student;

    //assigning value
    s3->rollno=32;

    //printing them 
    cout<<"S3 AGE:"<<s3->getage( )<<endl;
    
    cout<<"S3 ROLLNO:"<<s3->rollno<<endl;
    

}