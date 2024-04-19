#include <bits/stdc++.h>
using namespace std;


class Solution{
	
	
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	  unordered_set<int> s;
	  vector<int> ans;
	 for(int i=0; i<m;i++){
	     s.insert(b[i]);
	 }
	 for(int i=0; i<n; i++){
	     if(s.count(a[i])==0){
	         ans.push_back(a[i]);
	     }
	 }
	 return ans;
	} 
};
	



int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<int> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}
