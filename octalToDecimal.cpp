#include <iostream>
using namespace std;

int octalToDecimal(int n) {
    int base = 1;
    int ans = 0;
    for (int i=n; i > 0; i /= 10) {
        int y = i % 10;
        ans += base * y;
        base *= 8;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter octal number: " << endl;
    cin >> n;
    cout << octalToDecimal(n);
}
