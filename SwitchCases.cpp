#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"press 1 if it is raining as well as muddy\npress 2 if it is raining only\npress 3 if it is muddy only "<<endl;
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"She'll take umbrella and rain shoes both"<<endl;
        break;

        case 2:
        cout<<"She'll take umbrella only"<<endl;
        break;

        case 3:
        cout<<"She'll take her rain shoes only"<<endl;
        break;

        default:
        cout<<"It's a sunny day"<<endl;

    }
    return 0;
}
