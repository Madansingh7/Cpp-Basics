#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
   

    cout<<"size of vec is: "<<vec.size()<<endl;
    cout<<"capacity of vec is: "<<vec.capacity();
}