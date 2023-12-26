#include<iostream>
#include<map> // this is the header which we use to add maps to our program
using namespace std;
int main(){
    map<int,string> myMap; // this is how we declare Map
    for(int i = 0; i<5;i++){
        cout<<"Enter name "<<i+1<<endl;
        cin>>myMap[i];
    }
// without iterator
    cout<<"The names are:-"<<endl;
    for(int i = 0; i<5;i++){
        cout<<myMap[i]<<endl;
    }

// To check weather the key exist or not 
cout<<"Enter the index of the name you want to find wheather it exist or not"<<endl;
    int f;
    cin>>f;
    if(myMap.find(f) != myMap.end()){
        cout<<"value at "<<f<<" is "<<myMap[f]<<endl;
    }
    else{
        cout<<"value not found"<<endl;
    }
// With iterator
cout<<"Iterate with ::iterator"<<endl;
    map<int,string>::iterator it = myMap.begin();
    while(it != myMap.end()){
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }

// with range-based for loop
cout<<"Iterate with range-based for loop"<<endl;
for (const auto &pair : myMap) {
    cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
}

cout<<"Give the key that you want to erase: ";
int z;
cin>>z;
cout<<"value "<<z<<" that is "<<myMap.at(z)<<" is erased"<<endl;
myMap.erase(z);
cout<<"Size of myMap is: "<<myMap.size()<<endl;
cout<<"Is myMap is empty: "<<(myMap.empty() ? "Yes" : "No")<<endl;
    return 0;
}
