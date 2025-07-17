#include<iostream>
using namespace std;

int main(){

    //increment
    cout<<"----increment----\n";
    int a=5;
    cout<<++a<<endl;//pre increament
    cout<<a++<<endl; //post increament
    cout<<a<<endl;
    
    //decrement
    cout<<"----decrement----\n";
    int b=5;
    cout<<--b<<endl;//pre decreament
    cout<<b--<<endl; //post decreament
    cout<<b<<endl;

    return 0;
}