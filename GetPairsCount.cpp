#include <iostream>
//#include <unordered_map>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
	int count =0;
	for(int i=0;i<n;i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]+arr[j]==k)
			count++;
		}
	}
        
//    unordered_map<int,int> mp;
//    int count =0;
//    for(int i=0; i<n; i++){
//        int a=k-arr[i];
//        if(mp.find(a)!=mp.end()) count +=mp[a];
//            mp[arr[i]]++;
//            

//    }
    return count;
}

int main(){
	
	int nums[4]={1,1,1,1};
	cout<<getPairsCount(nums, 4, 2)<<endl;
}
