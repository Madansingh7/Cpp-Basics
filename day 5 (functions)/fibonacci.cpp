#include<iostream>
using namespace std;

// Function to return the nth Fibonacci number
int fibonacci(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;

    int a = 0, b = 1, next;
    for(int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "Fibonacci number at position " << n << " is: " << result << endl;

    return 0;
}
