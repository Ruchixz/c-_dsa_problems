#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
         sort(arr.begin(), arr.end());
        for(int i = arr.size()-1; i>=2;i--)
        {
            int j = 0, k=i-1;
            while(j<k)
            {
                int currentSum = arr[j]+arr[k];
                if(currentSum == arr[i])
                return true;
                else if(currentSum > arr[i])
                k--;
                else if (currentSum < arr[i])
                j++;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        bool res = obj.findTriplet(arr);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

