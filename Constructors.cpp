#include <iostream>
using namespace std;

class sum 
{
    int a,b;
    public:
    sum() // without arguments(default constructor)
    {
       cout<<"Enter Your Numbers"<<endl;
       cin>>a>>b;
    }
    
    void display()
    {
      int c = a+b;
        cout<<"The sum for the number "<<a<<" and "<<b<<" is "<<c<<endl;
    }    
    sum(int z)// with arguments
    {
        for(int x = z;x<10;x++)
        {
            cout<<x<<endl;
        }
    }
};

int main()
{
    int a,b;
    sum ob,ob1(5);
    ob.display();
    
   }
