#include<iostream>
using namespace std;

int main(){
    //for ternary operator we use
    // condition ? statment1 : statment2;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<(n>=0?"positive":"negative")<<endl;
    return 0;
}