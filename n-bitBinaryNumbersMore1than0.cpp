#include <bits/stdc++.h>
using namespace std;


class Solution{
public:	
void solve(string str, int count0,int count1, vector<string>&ans,int n)
    {
        if(str.length() == n)
        {
            ans.push_back(str);
            return;
        }
        if(count1>count0)
        {
            solve(str+"1",count0,count1+1,ans,n);
            solve(str+'0',count0+1,count1,ans,n);
        }
        else
        {
            solve(str+"1",count0,count1+1,ans,n);
        }
    }
 
vector<string> NBitBinary(int n)
{
    vector<string>ans;
    string str = "";
    int count0=0,count1=0;
    solve(str,count0,count1,ans,n);
    return ans;
}
};



int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
