#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"\nEnter a number: ";
    cin>>num;
    if (num % 2 == 0) {
        cout<<"Number is even\n";
    }
    else{
        cout<<"Number is odd\n";
    }
    return 0;
}