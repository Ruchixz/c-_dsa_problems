#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=2;
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;

        int spoint=arr[0][0],epoint=arr[0][1];
        for(int i=1;i<=n;i++)
        {
            if(i!=n && epoint>arr[i][1])
            {
                continue;
            }
            else if(i!=n && epoint>=arr[i][0])
            {
                epoint=arr[i][1];
            }
            else
            {
                ans.push_back({spoint,epoint});
                if(i!=n){
                spoint=arr[i][0];
                epoint=arr[i][1];
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.mergeOverlap(arr);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}