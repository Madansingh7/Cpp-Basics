#include<iostream>
#include <vector>
using namespace std;

int main(){

    //vector size function --> vectorname.size()
    cout<<"---------using size function----------"<<endl;
    vector<char>vec={'a','b','c','d','e'};
    cout<<"size = "<<vec.size()<<endl;
    cout<<endl;


    //vector push_back function --> vectorname.push_back(value)
    cout<<"---------using push_back function----------"<<endl;
    vector<int>vec1;
    cout<<"vec1 before size = "<<vec1.size()<<endl;

    vec1.push_back(25);
    vec1.push_back(45);

    cout<<"vec1 after size = "<<vec1.size()<<endl;
    cout<<"vec1 value after push back: ";
    for (int i : vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    //vector pop_back function --> vectorname.pop_back()
    cout<<"---------using pop_back function----------"<<endl;
    vec1.pop_back();
    cout<<"vec1 value after pop back: ";
     for (int i : vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    vector<int>vec2={1,4,3,5};
    //vector front function --> vectorname.front()
    cout<<"---------using front function----------"<<endl;
    cout<<"first value is: "<<vec2.front()<<endl;

    //vector back function --> vectorname.front()
    cout<<"---------using back function----------"<<endl;
    cout<<"last value is: "<<vec2.back()<<endl;
    cout<<endl;

    //vector at function --> vectorname.at()
    cout<<"---------using at() function----------"<<endl;
    cout<<"index 2 value is: "<<vec2.at(2)<<endl;
    cout<<"index 3 value is: "<<vec2.at(3)<<endl;
    return 0;
}