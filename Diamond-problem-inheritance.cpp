#include <iostream>
using namespace std;
class Vehicles
{
    public: 
    int wheels=4;
    int price = 10;
    
    void display()
    {
        cout<<"Vehicles will have "<<wheels<<" wheels with a starting price of "<<price<<" Lacs"<<endl;
    }
};
class car:public Vehicles
{
    public:
    string name="mercedes";
    public:
    void display()
    {
        cout<<"Cars have "<<wheels<<" wheels with the company named "<<name<<" With the starting price of "<<price<<" Lacs"<<endl;
    }
};
class A:virtual public car
{
    public:
    string model="A-Class";
    void display()
    {
        A ob;
        cout<<"Cars have "<<wheels<<" wheels with the company named "<<name<<" model"<<model<<" With the starting price of "<<(ob.price =40 )<<" Lacs"<<endl;
    }
};
class B:virtual public car
{
    public:
    string model="B-Class";
    void display()
    {
        B ob;
        cout<<"Cars have "<<wheels<<" wheels with the company named "<<name<<" model"<<model<<" With the starting price of "<<(ob.price=30)<<" lacs"<<endl;
    }
};
class C: public A, public B
{
    public:
 void display()
    {
        B ob;
        A ob2;
        cout<<"C-Class is more expensive than "<<ob2.model<<" and "<<ob.model<<" but all have their unique designs under "<<name<<endl;
    }   
};
int main()
{
car ob;
ob.display();
A ob1;
ob1.display();
B ob2;
ob2.display();
C ob3;
ob3.display();
}
