/*There is a cricket match going on between two teams A and B.
Team B is batting second and got a target of X runs. Currently, team B has scored Y runs. Determine how many more runs Team B should score to win the match.
Note: The target score in cricket matches is one more than the number of runs scored by the team that batted first.
Implement the code using static data members and member functions*/

#include<iostream>
using namespace std;
class cricket
{
   static int x,y;
    public:
   static void getdata();
   
     static void display();
   
    
};
 int cricket::x;
 int cricket::y;
 void cricket::getdata()
    {
        cout<<"Team A Score"<<endl;
        cin>>x;
        cout<<"Team B Score till now"<<endl;
        cin>>y;
    }
    void cricket::display()
    {
        cout<<"Team B need "<<(x+1)-y<<" more Runs to win";
    }


int main()
{
   cricket::getdata();
   cricket::display();
}
