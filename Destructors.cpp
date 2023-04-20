#include <iostream>
using namespace std;

class sum
{
    int a,b;
    public:
    sum()
    {
       cout<<"Enter Your Numbers"<<endl;
       cin>>a>>b;
    }
    sum(int x, int y)
    {
        cout<<"Enter Your Numbers using parameters"<<endl;
       cin>>a>>b;
    }
    sum(sum &u)
    {
        cout<<"Enter Your Numbers using parameters"<<endl;
       cin>>a>>b;
    }
    void display()
    {
      int c = a+b;
        cout<<"The sum for the number "<<a<<" and "<<b<<" is "<<c<<endl;
    }    
    ~sum()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    int a,b;
  {  sum ob;
   ob.display();}
  sum ob1(a,b);
    ob1.display();
   
    sum ob2(ob1);
    ob2.display();
}
