#include<iostream>
#include<string>
using namespace std;

int hexadecimalToDecimal(string n){
    int base = 1;
    int ans = 0;
    for(int i = n.size()-1;i>=0;i--){
        if(n[i] >= '0' && n[i]<= '9'){
            ans += (n[i] - '0') *base;
        }
        else if(n[i] >= 'A' && n[i]<= 'F'){
            ans += (n[i] - 'A' +10)*base;
        }
        base *= 16;
    }
    return ans;
}

int main(){
    string n;
    cout<<"Enter the hexadecimal number"<<endl;
    cin>>n;
    cout<<hexadecimalToDecimal(n)<<endl;
}
