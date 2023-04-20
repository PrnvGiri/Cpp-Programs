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

class truck: public car
{
    public:
    void display()
    {
        cout<<"Trucks will have "<<wheels<<" with the company named "<< name<<" With the starting price of "<<price<<" Lacs"<<endl;
    }
};
int main()
{
 Vehicles ob;
 ob.display();
 car ob1;
 ob1.price = 50;
 ob1.display();
 truck ob2;
 ob2.wheels = 6;
 ob2.price = 60;
 ob2.display();

}
