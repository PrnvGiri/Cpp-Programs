#include <iostream>
using namespace std;

class BCA {
        int num;
    public:
        BCA(int n) {
            num = n;
        }
        void display() {
            cout << "Sum is: " << num << endl;
        }
        friend BCA add(BCA a, BCA b);
};

BCA add(BCA a, BCA b) {
    BCA sum = a.num + b.num;
    return sum;
}

int main() {
    BCA num1 = 1000;
    BCA num2 = 74587;
    BCA result = add(num1, num2);
    result.display();
    return 0;
}
