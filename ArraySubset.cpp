#include<iostream>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    for(int i=0; i<m; i++){
        int num=a2[i];
        for(int j=0; j<n; j++){
            if(num==a1[j]){
                a1[j]=0;
                break;
            }
            if(j==n-1 && num!=a1[j]){
                return "No";
            }
        }
        
    }
    return "Yes";
}

int main(){
	
	int arr[7] ={1,2,3,4,4,5,6};
	int brr[3]={1,2,4};
	cout<<isSubset(arr, brr, 7, 3)<<endl;
}
