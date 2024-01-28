#include <iostream>
using namespace std;


int equilibriumPoint(int a[], int n) {
    
       
        if(n==1)
            return 1;
        
            int sum =0;
            for(int i =0; i <n; i++)
                sum += a[i];
            
            int left_sum =0;
            for(int i =0; i < n; i++)
            {
                sum -= a[i];
                if(sum == left_sum)
                    return i+1; 
                left_sum += a[i];
            }
            return -1;

    }
    
    int main(){
    	
    	int arr[5]={1,3,5,2,2} ;
    	cout<<equilibriumPoint(arr, 5)<<endl;
	}

