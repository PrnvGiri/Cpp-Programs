//Just basic syntax of using a class and object in c++
#include<iostream>
using namespace std;
class BCA
{
   string name;
   int marks;
   
   public:
   void getdata()
   {
     cout<<"Enter Your name"<<endl;
     cin>>name;
     cout<<"Enter your marks"<<endl;
     cin>>marks;
   }

   void display()
   {
      cout<<"Hello "<<name<<" your marks is "<<marks<<endl;
   }
};
int main()
{
   BCA a,b;
   a.getdata();
   b.getdata();
   a.display(),b.display();
   
   return 0;
}
