// most optimal approach approach
// O(n) --> t.c
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority(vector<int>arr, int n){
    int freq=0, ans=0;
   for(int i=0; i<n; i++){
    if(freq==0){
        ans=arr[i];
    }
    else if(ans == arr[i]){
        freq++;
        ans=arr[i];
    }
    else{
        freq--;
    }
   }
//    verifying
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == ans)
            count++;
    }

    if (count > n / 2)
        return ans;
    else
        return -1;  // No majority element
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
    res=majority(arr,n);

    if(res!=-1){
        cout<<"majority element in given array is: "<<res<<endl;
    }
    else{
        cout<<"No majority element"<<endl;
    }    

    return 0;
}