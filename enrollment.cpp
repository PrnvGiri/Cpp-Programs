/*There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. If there are K other students who have already enrolled in the course, determine if it will still be possible for all the N friends to do so or not.
Each test case consists of a single line containing three integers N, M and K - the size of the friend group, the capacity of the course and the number of students already registered for the course
Write a code with the help of inline functions and use the concept of call by reference.*/

#include<iostream>
using namespace std;
class enroll
{
public:


inline void getdata(int &m)
{
    cout<<"Enter Maximum capacity of students for course"<<endl;
    cin>>m;
}
inline void input(int &k)
{
    cout<<"Enter the number of students who are already enrolled"<<endl;
    cin>>k;
}
inline void group(int &n)
{
    cout<<"How many students want to join the course"<<endl;
    cin>>n;
}
inline void display(int &k, int &m,int &n)
{
    if((k-m)>n)
    {
        cout<<n<<" "<<"can join the course"<<endl;
    }
    else
    {
        cout<<n<<" "<<"can't join the course due to shortage of capacity"<<endl;
    }
    
}
};
int main()
{
    int x,y,z;
    enroll s1;
    s1.getdata(x);
    s1.input(y);
    s1.group(z);
    s1.display(x,y,z);
    return 0;
}
