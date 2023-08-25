#include<iostream>
using namespace std;
#define size 100
   int main(){
    int x, arr[size],c=2;
    cout<<"Enter the limit"<<endl;
    cin>>x;
    for(int i=0;i<x;){
        bool isPrime=true;
        for(int j = 2;j*j<=c;j++){
            if(c%j==0){
                isPrime=false;
                break;
            }

        }
        if(isPrime==true){
            arr[i]=c;
            i++;
        }
        c++;
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<"\t";
    }
}
