#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
    int base = 1;
    int ans = 0;
    for (int i=n; i > 0; i /= 10) {
        int y = i % 10;
        ans += base * y;
        base *= 2;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter binary number: " << endl;
    cin >> n;
    cout << binaryToDecimal(n);
}
