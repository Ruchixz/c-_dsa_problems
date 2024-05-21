#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        vector<int> ans;
        
        map<int, priority_queue<int>>m;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=x) m[abs(arr[i]-x)].push(arr[i]);
        }
        
        for(auto it:m){
            if(k==0) return ans;
            
            auto pq = it.second;
            while(k>0 && !pq.empty()){
                ans.push_back(pq.top());
                pq.pop();
                k--;
            }
        }
        
        return ans;
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
