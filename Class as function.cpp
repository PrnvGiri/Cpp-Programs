#include <iostream>

using namespace std;

class BCA
{
public:
int a,x,sum;
BCA show(BCA p)
{
    BCA ob;
ob.sum= p.a+p.x;
    return ob;
}
};

int main()
{
BCA ob,ob1;
ob1.a=1200;
ob1.x=900;
ob=ob1.show(ob1);
cout<<ob.sum;

return 0;
}
