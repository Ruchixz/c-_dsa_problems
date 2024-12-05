// C++ program to find minimum of coins
// to make a given change sum
#include<bits/stdc++.h>
using namespace std;

int minCoinsRecur(int i, int sum, vector<int> &coins) {
    
    // base case
    if (sum == 0) return 0;
    if (sum <0 || i == coins.size()) return INT_MAX;
    
    int take = INT_MAX;
    
    // take a coin only if its value
    // is greater than 0.
    if (coins[i]>0) {
        take = minCoinsRecur(i, sum-coins[i], coins);
        if (take != INT_MAX) take++;
    }
    
    int noTake = minCoinsRecur(i+1, sum, coins);
    
    return min(take, noTake);
}

int minCoins(vector<int> &coins, int sum) {

   int ans = minCoinsRecur(0, sum, coins);
   return ans!=INT_MAX?ans:-1;
}

int main() {
    vector<int> coins =  {9, 6, 5, 1};
    int sum = 19;
    cout << minCoins(coins, sum);
    return 0;
}

