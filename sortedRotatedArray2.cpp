#include <iostream>
using namespace std;

bool search( int nums[] ,int n, int target) {
    int start=0;
    int end= n;
    while(start<=end){
        int mid= start+(end-start)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[mid]>nums[end]){
            if(target>nums[mid] || target <=nums[end]){
                start= mid+1;
            } else end= mid-1;
        } else if ( nums[mid]== nums[end]){
            end--;
            } else{
                if(target<=nums[end] && target>nums[mid]){
                    start = mid+1;
                } else end = mid-1;
        }
    }
        return false;  
}

int main(){
	int arr[7]={2,5,6,0,0,1,2};
	cout<<search(arr, 7, 6)<<endl;
	
}

