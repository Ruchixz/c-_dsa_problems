#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
       unordered_map<char, int>mp;
       string res="";
       for(int i=0; i<str.size(); i++){
           if(mp.find(str[i])==mp.end()){
               res.push_back(str[i]);
               mp[str[i]]++;
           }
           
       }
       return res;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
