#include<iostream>
using namespace std;

int sum(){
  int x;
  cout<<"Enter the number"<<endl;
  cin>>x;
  if(x%2==0){
    return x;
  }
  else{
    cout<<"please enter an even number"<<endl;
    sum();
  }
}

int main(){
  int x,y;
  x = sum();
  y = sum();
  cout<<"sum is : "<<x+y;
  return 0;
}
