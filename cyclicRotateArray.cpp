#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int x=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=x;
    // for(int i=0; i<n;i++){
    //     swap(arr[i], arr[n-1]);
    // }
    
}

int main(){
	
	int arr[5]={1,2,3,4,5};
	rotate(arr, 5);
}
