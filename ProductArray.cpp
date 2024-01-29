#include <iostream>
using namespace std;

void ProductArray(int nums[], int n){

   int count=0;
        long long product=1;
        long long product1=1;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
        }
        
        for(int i=0;i<n;i++){
    
            if(count>=2 || count==0){
                product = product * nums[i];
            }
            else{
                if(nums[i]!=0){
                    product1 = product1 * nums[i];
                }
                else{
                    continue;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(count==0){
               nums[i] = product/nums[i];
            }
            else if(count>=2){
                nums[i]=0;
            }
            else{
                if(nums[i]!=0){
                    nums[i]=0;
                }
                else{
                    nums[i]=product1;
                }
            }
        }
//        return nums;
}

void printArray(int arr[], int size ){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
int arr[5]= {10, 3, 5, 6, 2};
ProductArray(arr,5);
printArray(arr,5);  		
		}
