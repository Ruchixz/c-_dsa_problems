#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        long count = 0;
        int N= arr.size();
        sort(arr.begin(), arr.end());
        for(int i = 1; i < N; i++)
        {
            if(arr[i] <= arr[i-1])
            {
                int val = arr[i-1] - arr[i] + 1;
                count += val;
                arr[i] += val;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int ans = ob.minIncrements(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

