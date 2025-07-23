//push_back() used to add element at last of vector 
//pop_back() used to remove last element from vector
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> names;
    names.push_back("Madan");
    names.push_back("Raj");
    names.push_back("Coder");

    for (string name : names) {
        cout << name << " ";
    }
    cout<<endl;

    names.pop_back();
   
    for (string name : names) {
        cout << name << " ";
    }

    return 0;
}
