#include<iostream>
using namespace std;

int isprime(int n){
    if(n <= 1) return 0; // 0 and 1 are not prime
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main(){
    int n;
    cout << "Enter n value: ";
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are:\n";

    for(int i = 2; i <= n; i++){
        if(isprime(i)==1){
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
