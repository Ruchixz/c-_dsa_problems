#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
         int N=arr.size();
        sort(arr.begin(),arr.end());
        string res="";
        if(arr[0][0]!=arr[N-1][0])
        return "-1";
        for(int i=0;i<arr[0].size();i++)
        {
            if(arr[N-1][i]!=arr[0][i])
            {
                break;
            }
            else
            {
                res+=arr[0][i];
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

