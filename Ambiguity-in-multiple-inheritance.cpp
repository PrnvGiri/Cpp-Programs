// ambiguity in multiple inheritance
#include <iostream>

using namespace std;
class A
{
public:
string name;
void show(string &nm)
{
name=nm;
cout<<name<<" By Class A"<<endl;
}

};

class B
{
public:
string name;
void show(string &nm)
{
name=nm;
cout<<name<<" By class B"<<endl;
}

};

class C : public A,public B
{
public:
void getname()
{
C ob;
string nm1;
cout<<"Enter name";
cin>>nm1;
ob.A::show(nm1);
ob.B::show(nm1);
}
};
int main()
{
C ob;

ob.getname();
return 0;
}
