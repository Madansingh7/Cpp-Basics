// brute force approach
#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int>arr, int n){
    for(int i : arr){
        int freq=0;
        for(int j : arr){
            if(i == j){
                freq++;
            }
        }
        if(freq>n/2){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,res;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter "<<n<<" sorted elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    res=majority(arr,n);

    if(res!=-1){
        cout<<"majority element in given array is: "<<res<<endl;
    }
    else{
        cout<<"error:no majority element"<<endl;
    }
    return 0;
}