#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        unordered_map<int, pair<int, int>> map;
        int ans=0, n=arr.size();
        for(int i=0; i<n; ++i){
            if(map.count(arr[i])){
                map[arr[i]].second=i+1;
            }else{
                map[arr[i]].first=i+1;
            }
        }
        for(auto& p:map){
            ans=max(ans, p.second.second-p.second.first);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
