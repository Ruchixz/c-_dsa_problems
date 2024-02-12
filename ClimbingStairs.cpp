#include <iostream>
using namespace std;

int ClimbingStairs (long long nStairs){
	if(nStairs<0)
	    return 0;
	
	if(nStairs ==0)
	    return 1;
		
	int ans= ClimbingStairs(nStairs-1)+ClimbingStairs(nStairs -2);
	
	return ans;	    
}

int main(){
	int n;
	cin>>n;
	cout<<ClimbingStairs(n)<<endl;
	
	return 0;
}
