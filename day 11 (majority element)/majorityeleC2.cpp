// optimal approach approach
// O(nlogn) --> t.c
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority(vector<int>arr, int n){
    int freq=1, ans=arr[0];
   for(int i=1; i<n; i++){
    if(arr[i]==arr[i-1]){
        freq++;
    }
    else{
        freq=1;
        ans=arr[i];
    }
    if(freq>n/2){
        return ans;
    }
   }
   return -1;
}
int main(){
    int n,res;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter "<<n<<" elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());//sorted in asscending order

    res=majority(arr,n);

    if(res!=-1){
        cout<<"majority element in given array is: "<<res<<endl;
    }
    else{
        cout<<"error:no majority element"<<endl;
    }    

    return 0;
}