#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter n value: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter "<<n<<" values: ";
    for(int i=0; i<n; i++){
        cin>>arr.at(i);
    }
    cout<<endl;
    for(int strt=0; strt<n; strt++){
        for(int end=strt; end<n; end++){
            for(int i=strt; i<=end; i++){
                cout<<arr.at(i)<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }

    int total=(n*(n+1))/2;

    cout<<"total possible subarrys are: "<<total;
}