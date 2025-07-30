// LEETCODE 121

// Only one transaction (buy once, sell once)
// Always buying at a lower index and selling at a higher index

// T.C => O(n)  S.C => O(1)
#include<iostream>
#include<vector>
using namespace std;

int func(vector<int>price, int n){
    int maximumPrice=0, bestBuy=price[0];
    //normal
    // for(int i=1; i<n; i++){
    //     if(price[i]>bestBuy){
    //         maximumPrice=max(maximumPrice,price[i]-bestBuy);
    //     }
    //     bestBuy=min(bestBuy,price[i]);
    // }

    // using for each loop for better readability
    for(int i : price){
        if(i>bestBuy){
            maximumPrice=max(maximumPrice,i-bestBuy);
        }
        bestBuy=min(bestBuy,i);
    }

    return maximumPrice;
}
int main(){
    int n;

    cout<<"Enter total no of prices: ";
    cin>>n;

    vector<int>prices(n);

    cout<<"Enter "<<n<<" prices: ";
    for(int i=0; i<n; i++){
        cin>>prices.at(i);
    } 


    int res=func(prices,n);

    cout<<"Max profit is: "<<res<<endl;
    return 0;
}