#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
          vector<long long> ans;
        
        while(n!=1) {
            ans.push_back(n);
            if(n%2==0)
                n=sqrt(n);
            else
                n=n*sqrt(n);
        }
        ans.push_back(1);
        return ans;
        
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        Solution ob;
        vector<long long> ans = ob.jugglerSequence(n);
        for (long long u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
