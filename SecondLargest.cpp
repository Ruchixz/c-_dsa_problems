#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int maxi=INT_MIN, maxx=INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>maxi){
                maxx=maxi;
                maxi=arr[i];
            }
            else if(arr[i]>maxx && maxi!=arr[i]){
                maxx=arr[i];
            }
        }
        return (maxx==INT_MIN)? -1:maxx;
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
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

