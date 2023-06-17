#include <iostream>
using namespace std;

int main()
{
    int rows,column;
    cout<<"Enter Rows and column"<<endl;
    cin>>rows>>column;
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<column;j++)
        {
            if(i==0 || i == rows-1 || j == 0|| j==column-1)
            cout<<"* ";
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
