#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int k) {
    for(int i=0; i<n; i++){
           if(arr[i]==k){
               return i;
           }
       }
       return -1;
    }
    
    int main(){
    int arr[5] = {1,2, 3, 4, 5};
    cout<<binarysearch(arr,5, 4)<<endl;
	}
