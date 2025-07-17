// A B C D 
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;

int main(){
    int i, j, n;

    cout<<"Enter n value ";
    cin>>n;

    for(i=0; i<n; i++){
        char ch='A';
        for(j=0; j<n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}