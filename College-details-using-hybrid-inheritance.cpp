#include<iostream>
using namespace std;
class student
{
    public:
    string section,university;
    void stu_data()
    {
        cout<<"Enter your Section "<<endl;
        cin>>section;
        cout<<"Enter Your university"<<endl;
        cin>>university;
    }
};
class personal : virtual public student
{
    public:
    string name;
    int roll, reg;
    void per_data()
    {
         cout<<"Enter your Name "<<endl;
        cin>>name;
        cout<<"Enter Your roll number"<<endl;
        cin>>roll;
        cout<<"Enter your reg no."<<endl;
        cin>>reg;
    }
};
class course : virtual public student
{
    public:
    int cap202,cap281,cap404,cap567,cap895;
    void marks_data()
    {
        cout<<"Enter your marks for CAP 202"<<endl;
        cin>>cap202;
        cout<<"Enter your marks for CAP 281"<<endl;
         cin>>cap281;
        cout<<"Enter your marks for CAP 404"<<endl;
         cin>>cap404;
        cout<<"Enter your marks for CAP 567"<<endl;
         cin>>cap567;
        cout<<"Enter your marks for CAP 895"<<endl;
         cin>>cap895;
    }
};
class result : virtual public course, virtual public personal
{
    public:
    int avg;
    void calculate()
    {
        student a;
        personal b;
        course c;
        a.stu_data();
        b.per_data();
        c.marks_data();
        cout<<"Name: "<<b.name<<endl;
        cout<<"section: "<<a.section<<endl;
       cout<<"Roll: "<<b.roll<<endl;
       cout<<"Reg no: "<<b.reg<<endl;
       cout<<"Course marks: "<<c.cap202+c.cap281+c.cap404+c.cap567+c.cap895<<endl;
       cout<<"Average marks: "<<(c.cap202+c.cap281+c.cap404+c.cap567+c.cap895)/5<<endl; 
       cout<<a.university<<endl;       
    }
};
int main()
{
    result a;
    a.calculate();
}
