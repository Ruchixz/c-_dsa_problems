#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int n= height.size();
        int count=1;
        int max=height[0];
        for(int i=1; i<n; i++){
            if(height[i]>max){
                count++;
                max=height[i];
            }
            else{
                continue;
            }
        }
        return count;
    }
};



int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> height;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            height.push_back(number);
        }
        Solution ob;
        int ans = ob.countBuildings(height);
        cout << ans << endl;
    }
    return 0;
}
