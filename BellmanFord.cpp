vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    vector<int>distance(n,1e8);
            distance[src] = 0;
               for(int i=0;i<n-1;i++) {
               for(auto it: edges) {
                   int u = it[0];
                   int v = it[1];
                   int wt = it[2];
                   if(distance[u] != 1e8 && distance[u] + wt < distance[v]) {
                       distance[v] = distance[u] + wt;
                   }
               }
           }
           // check for negative cycle
           for(auto it: edges) {
               int u = it[0];
               int v = it[1];
               int wt = it[2];
               if(distance[u] != 1e8 && distance[u] + wt < distance[v]) {
                   return {-1};
        }
           }
           return distance;
    }
