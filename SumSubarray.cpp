#include<iostream>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
    {
        
         int count=1;
        int ans=INT_MAX;
        int l=0;int h=0;
        int csum=0;
        csum=arr[l];
        while(l<=h && h<n){
            if(csum >x){
                ans=min(ans,count);
                csum=csum-arr[l];
                count--;
                l++;
            }
            else if(csum<=x){
                h++;
                csum+=arr[h];
                count++;
            }
        }
        if(ans==INT_MAX){
            ans=0;
        }
        return ans;
    }
    
    int main(){
    	
    	int arr[5]={1,10,5,2,7};
    	cout<<smallestSubWithSum(arr,5,9)<<endl;
	}
