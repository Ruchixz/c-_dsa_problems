#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
	if(n==0 || n==1){
		return;
	}
	
	for(int i=0; i<n-1; i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i], arr[i+1]);
			
		}
	}
	sortArray(arr, n-1);
}
void printArray(int arr[], int size ){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	int arr[5]= {2,5,1,6,9};
	sortArray(arr, 5);
	printArray(arr,5);
	
	return 0;
}
