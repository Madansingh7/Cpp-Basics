//finding unique element in an array

#include<iostream>
#include<vector>
using namespace std;

int main(){
     int n;
    cout << "Enter size of array (max 100): ";
    cin >> n;

    vector<int>arr(n); 

    cout << "Enter " << n << " values: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //using normal for loop
    // int ans=0;
    // for (int i=0; i<n; i++){
    //    ans=ans^arr[i];
    // }

    //using for each loop
    int ans=0;
    for(int i : arr){
        ans^=i;
    }
    cout<<ans;
    return 0;
}
// XOR method does not work for element repeating 3 times 
// for example 1 1 2 1