// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
#include<iostream>
using namespace std;

int main(){
    int i, j, k, l, n;

    cout<<"Enter n value ";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<i+1; j++){
            cout<<"*";
        }
        for (j = 1; j <= 2*(n - i); j++) {
            cout <<" ";
        } 
        for(k=0; k<i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (i = n; i >= 1; i--) {
        // Left side stars
        for (j = 0; j < i; j++) {
            cout << "*";
        }
        // Spaces in the middle
        for (j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right side stars
        for (j = 1; j <= i; j++) {
            cout <<"*";
        }
        cout<<endl;
    }
    return 0;
}