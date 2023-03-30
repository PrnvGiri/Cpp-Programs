/*Write a code using function overloading
Ram wants to conduct a lecture for which he needs to set up an online meeting of exactly X minutes.
The meeting platform supports a meeting of maximum 3030 minutes without subscription and a meeting of unlimited duration with subscription.
Determine whether Ram needs to take a subscription or not for setting up the meet.
• Each test case contains a single integer X - denoting the duration of the lecture.*/

#include<iostream>
using namespace std;
class meeting
{
public:


void getdata(int &m)
{
    cout<<"Enter your meeting time in minutes"<<endl;
    cin>>m;
}
int getdata(int *a)
{
    if((*a)>30)
    {
        cout<<"You need to buy our subscription"<<endl;
    }
    else
    {
        cout<<"Enjoy our free service"<<endl;
    }
    
}
};
int main()
{
    int x;
    meeting m1;
    m1.getdata(x);
    m1.getdata(&x);
    return 0;
}
