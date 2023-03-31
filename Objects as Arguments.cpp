#include <iostream>

using namespace std;
class sum
{
    int a, b;
    public:
    void getdata(sum &p)
    {
        cout<<"Enter Your A and B"<<endl;
        cin>>a>>b;
    }
    void add(sum &p)
    {
        int c = a+b;
        cout<<"Your sum is "<<c<<endl;
    }
};

int main()
{
    sum p;
    p.getdata(p);
    p.add(p);
}
