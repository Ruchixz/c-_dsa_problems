#include <iostream>
using namespace std;

 int mySqrt(int x) {
    int start =0;
    int end=x;
    while(start<=end){
        int mid=start+(end-start)/2;
        if((long)mid*mid>(long)x){
            end=mid-1;
        }
        else if(mid*mid ==x){
            return mid;
        }
        else{
            start=mid+1;
        }
            
    }
    return end;
}

int main (){
	int n;
	cout<<"Enter number "<<endl;
	cin>>n;
	cout<<mySqrt(n)<<endl;
}
