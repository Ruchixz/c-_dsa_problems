#include <iostream>
using namespace std;

int Nth_term(int a, int d, int n) {
	return (a+(n-1)*d);
}

int main() {
	
	int a;
	cout<< "Enter initial value: "<< endl;
	cin>>a;
	int d;
	cout<< "Enter common difference: "<< endl;
	cin>>d;
	int n;
	cout<< "Enter n value: "<< endl;
	cin>>n;
	
	cout<<"The "<< n <<"th term is: "<< Nth_term(a,d,n)<<endl;
	
	return 0;
}
