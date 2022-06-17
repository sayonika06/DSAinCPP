
#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int rollno;
    private:
    int age;
    public:
    void display()
    {
        cout<<rollno<<endl;
    }
    int getage(int age)
    {
        return age;
    }
    void setage(int a)
    {
        if(a<0)
        {
            return;
        }
        age=a;
    }
    int displayage()
    {
        cout<<age<<endl;
    }
};

int main()
{
  student s1;
  s1.rollno=9;
  cout<<"s1 age:"<<s1.getage(12)<<endl;
//   s1.age=12; error cause age is private
  cout<<"S1 rollno:";
  s1.display();
  
  student *s2=new student;
  s2->rollno=32;
  cout<<"s2 age:"<<s2->getage(24)<<endl;
//   s2->age=24;error cause age is private
  cout<<"s2 rollno:";
  s2->display();
  
  student s3;
  student *s4=new student;
  s3.setage(34);
  s4->setage(44);
  s3.displayage();
  s4->displayage();
  
  
  
}
