class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int res=0;
        int i=0,j=0;
        while(i<n && j<m){
            if(s[j]>=g[i]){
                i++;
                j++;
                res++;
            }else{
                j++;
            }
        }
        return res;}
};
