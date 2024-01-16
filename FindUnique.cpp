#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}
//void printArray(int arr[], int size ){
//    for(int i=0; i<size; i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}


int main() {
	
	int arr[4]= {1,3,4,3};
	cout<<"The unique number is: "<<findUnique(arr, 4)<<endl;
//	printArray (arr, 6);
}
