#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        
          int i =0;
        int j=0;
       
        set<int>s;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                s.insert(arr1[i]);
                i++;
            }
            else if(arr1[i]>arr2[j]){
                s.insert(arr2[j]);
                j++;
            }
            else if(arr1[i]==arr2[j]){
                s.insert(arr1[i]);
                i++;
                j++;
            }
           
            
        }
         while(i<n){
             s.insert(arr1[i]);
             i++;
                
            }
            while(j<m){
                s.insert(arr2[j]);
                j++;
            }
             vector<int>v(s.begin(),s.end());
            
        return v;
    }
};



int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
