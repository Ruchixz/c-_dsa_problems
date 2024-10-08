#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int maxi1=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            maxi1=max(maxi1,arr[i]);
        }
        int maxi2=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=maxi1)
            {
                maxi2=max(maxi2,arr[i]);
            }
        }
        return maxi1+maxi2;
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
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
