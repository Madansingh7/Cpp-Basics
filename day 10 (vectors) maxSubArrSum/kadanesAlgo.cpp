#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter "<<n<<" elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int current_sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0; i < n; ++i) {//why ++i bcz its efficient than i++ both works same but ++i dont create copy whereas i++ does
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
        // if(current_sum <0){
        //     current_sum=0;
        // }
        // we can use if but more efficient is to use it without if condition
    }

    cout << "Maximum subarray sum: " << max_sum << endl;
    return 0;
}
