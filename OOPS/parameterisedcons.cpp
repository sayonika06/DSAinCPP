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
    //parameterised constructor
    student(int r)
    {
        cout<<"constructor 2 called"<<endl;
        rollno=r;
    }
     //parameterised constructor with two parameters
    student (int a,int r)
    {
        cout<<"constructor 3 called"<<endl;
        age=a;
        rollno=r;
    }
    
    void display()
    {
        cout<<rollno<<endl;
    }
    void displayboth()
    {
        cout<<age<<" "<<rollno<<endl;
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
    
    
    //calling parameterised constructor
    cout<<"parameterised constructor  static demo"<<endl;
    student s4(10);
    s4.display();
    cout<<"parameterised constructor dynamic demo"<<endl;
    student *s5=new student(100);
    s5->display();
    
    //parameterised constructor with two parameters 
    cout<<"For s6"<<endl;
    student s6(20,102);
    s6.displayboth();
    
}
