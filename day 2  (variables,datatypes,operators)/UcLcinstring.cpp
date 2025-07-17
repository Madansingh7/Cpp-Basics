#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char c[10];
    int up=0;
    int low=0;
    int len=0;
    cout<<"Enter a string: ";
    cin>>c;
    len=strlen(c);

    for(int i=0; i<len; i++){
        if(c[i] >= 'A' && c[i] <= 'Z'){
            up++;
        }
        if(c[i] >= 'a' && c[i] <= 'z'){
            low++;
        }
    }
    cout<<"upper case: "<<up<<", lowercase: "<<low<<endl;
    return 0;

}