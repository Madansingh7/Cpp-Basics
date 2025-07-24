// brute force approach O(n^2)
//Better approach then this IS "KADANE'S ALGORITHM" WHICH IS O(n)
#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main(){
    int n,Csum,Msum=INT_MIN;
    cout<<"Enter n value: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter "<<n<<" values: ";
    for(int i=0; i<n; i++){
        cin>>arr.at(i);
    }
    cout<<endl;
    for(int strt=0; strt<n; strt++){
            Csum=0;
        for(int end=strt; end<n; end++){
            Csum+=arr.at(end);
            Msum=max(Csum,Msum);
        }
    }

    cout<<"Maximum sum of array is: "<<Msum;
}