#include<iostream>
using namespace std;
#define size 100
   int search(int arr[],int i ,int n,int x){
    if(n<i){
        return -1;
    }
    else if(arr[i]==x){
        return i;
    }
    else if(arr[n]==x){
        return n;
    }
    search(arr,i+1,n-1,x);


   }
 

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the number you want to search"<<endl;
    cin>>x;
    int result = search(arr,0,n,x);
    if(result != -1){
        cout<<"number is there in array"<<endl;
    }
    else{
        cout<<"number is not in the array"<<endl;
    }
    
}
