/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/
#include<iostream>
using namespace std;


int main()
{
    int x,target,i,j,k;
    cout<<"enter your target"<<endl;
    cin>>target;
    cout<<"enter your numbers limit"<<endl;
    cin>>x;
    int arr[x];
    cout<<"Enter your numbers"<<endl;
    for(i=0;i<x;i++)
    {   
        cin>>arr[i];
        
    }
   for(i=0; i<x;i++)
    {
        k=i;
            for(j=i+1;j<x;j++)
            {
            if(arr[k] + arr[j] == target)
            {
                cout<<k<<j<<endl;
                
            }
        }
    }
}
