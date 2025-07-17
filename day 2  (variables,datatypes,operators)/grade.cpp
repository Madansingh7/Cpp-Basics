#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>=90){
        cout<<"You got A\n";
    }
    else if(marks<90 && marks>=80){
        cout<<"You got B\n";
    }
    else{
        cout<<"You got C\n";
    }
    return 0;
}