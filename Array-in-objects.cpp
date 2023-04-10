#include <iostream>
using namespace std;
class person
{
 string name;
 public:
 void getname()
 {
 cout<<"enter name "<<endl;
 cin>>name;
 }
void display()
 {
 cout<<"Name "<<name<<endl;
 }
};
int main()
 {
 person p1[10];
 for(int j=0;j<=3;j++)
 {
 p1[j].getname();
 p1[j].display();
 }
 }
