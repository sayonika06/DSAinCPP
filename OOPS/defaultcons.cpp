#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int rollno;
    private:
    int age;
    public:
    //default constructor
    student()
    {
        cout<<"constructor called"<<endl;
    }
    void display()
    {
        cout<<rollno<<endl;
    }
};

int main()
{
    student s1;
    s1.display();//garbage value
    // student s2;
    // s2.display();//garbage value
    student s2;
    student *s3=new student;
    s3->display();//garbage value
    
}
