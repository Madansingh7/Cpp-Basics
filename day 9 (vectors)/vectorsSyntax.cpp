#include<iostream>
#include <vector>
using namespace std;

int main(){
    //normal 
    vector<int>vec1={1,2,3};
    cout<<vec1[0]<<endl;

    //special
    vector<int>vec2(3,2);
     for (int i : vec2){
        cout<<i<<" ";
    }
    cout<<endl;
    //with char type
    vector <char>vec3(3,'A');
     for (char i : vec3){
        cout<<i<<" ";
    }
    return 0;
}