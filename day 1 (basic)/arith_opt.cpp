#include<iostream>
using namespace std;

int main(){
   int a,b;
   cout<<"Enter value for a: ";
   cin>>a;
   cout<<"Enter value for b: ";
   cin>>b;

    cout<<"sum is       : "<<(a+b)<<endl;
    cout<<"difference is: "<<(a-b)<<endl;
    cout<<"product is   : "<<(a*b)<<endl;
    cout<<"division is  : "<<(a/(float)b)<<endl;
    cout<<"reminder is  : "<<(a%b)<<endl;
   
    return 0;
}