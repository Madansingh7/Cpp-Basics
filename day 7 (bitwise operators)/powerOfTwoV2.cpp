//using loops
#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n <= 0) return false;

    while(n > 1) {
        if(n % 2 != 0)
            return false;
        n /= 2;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPowerOfTwo(n))
        cout << n << " is a power of 2.\n";
    else
        cout << n << " is NOT a power of 2.\n";

    return 0;
}
