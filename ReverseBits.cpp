#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    long long reversedBits(long long x) {
       
        long long ans = 0;
        for(int i = 0;i < 31; i++) {
            ans |= (x&1);
            ans <<= 1;
            x >>= 1;
        }

        return ans;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
