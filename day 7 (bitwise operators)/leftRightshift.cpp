#include<iostream>
using namespace std;

int main(){
    int a=10;
    //left shift
    cout<< (a<<1) <<endl;//use brackets bcz without bracket will get wrong value
    //right shift
    cout<< (a>>1) <<endl;
    return 0;
}
//left shift formula
//  ans = (a*(2^b))

//right shift formula
//  ans = (a/(2^b))
