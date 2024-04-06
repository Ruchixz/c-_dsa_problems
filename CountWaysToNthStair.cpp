#include <bits/stdc++.h>
using namespace std;





class Solution {
  public:
    // Function to count number of ways to reach the nth stair
    // when order does not matter.
    long long countWays(int n) {
        // your code here
        // long long dp[n+1];
        // dp[1] = 1;
        // dp[2] = 2;
        // for(int i = 3; i <= n; i++)
        // {
        //     dp[i] = dp[i-2] + 1;
        // }
        // return dp[n];
         return (n/2 + 1LL);
    }
};


int main() {
    // taking count of testcases
    int t;
    cin >> t;

    while (t--) {
        // taking stair count
        int n;
        cin >> n;
        Solution ob;
        cout << ob.countWays(n) << endl; // Print the output from our pre computed array
    }
    return 0;
}
