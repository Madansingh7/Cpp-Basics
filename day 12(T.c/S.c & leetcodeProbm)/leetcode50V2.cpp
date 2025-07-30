//T.C=>O(logn)  S.C=>O(1)
// HANDLES -VE POWER & +VE POWER
#include <iostream>
using namespace std;

// Function to handle power when exponent is positive and large
double fun1(double x, long long n) {
    double res = 1.0;
    while (n > 0) {
        if (n % 2 == 1)
            res *= x;
        x *= x;
        n /= 2;
    }
    return res;
}

// Function to handle power when exponent is positive and small (int)
double fun2(double x, int n) {
    double res = 1.0;
    while (n > 0) {
        if (n % 2 == 1)
            res *= x;
        x *= x;
        n /= 2;
    }
    return res;
}

int main() {
    double x;
    int n;
    double res;

    cout << "Enter X power N value \n";
    cout << "X: ";
    cin >> x;
    cout << "N: ";
    cin >> n;

    if(x==0){
        cout<<"result = 0\n";
        return 0;
    }

    if (n < 0) {
        long long N = -(long long)n;
        x=1/x;//handle negative power using reciprocal
        res = fun1(x, N);  
    } else {
        res = fun2(x, n);
    }

    cout << "Result = " << res << endl;
    return 0;
}