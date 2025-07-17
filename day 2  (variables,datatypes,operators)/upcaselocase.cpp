#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    if(c>='A' && c<= 'Z')
    {
        cout<<"uppercase\n";
    }
    else if(c>='a' && c<='z'){
        cout<<"lowercase\n";
    }
    else if(c>='0' && c<='9' ){
        cout<<"digit\n";
    }
    else{
        cout<<"symbols\n";
    }
    return 0;
}