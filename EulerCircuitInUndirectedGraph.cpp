#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	bool isEularCircuitExist(int v, vector<int>adj[]){
	   
	     for(int i=0;i<v;i++){
       if(adj[i].size()%2==1)
       return 0;
   }
   return 1;
	}

};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isEularCircuitExist(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}