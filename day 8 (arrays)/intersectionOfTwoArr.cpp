#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements for first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements for second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection: ";
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = -999999; // Mark as visited to avoid duplicates
                break;
            }
        }
    }
    cout << endl;
    return 0;
}