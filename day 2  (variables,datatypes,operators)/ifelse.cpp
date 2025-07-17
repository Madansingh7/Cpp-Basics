#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"\nEnter your age: ";
    cin>>age;
    if (age>=18) {
        cout<<"Your are eligible for vote\n";
    }
    else{
        cout<<"You are not eligible for vote\n";
    }
    
    return 0;
}