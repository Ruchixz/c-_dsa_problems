#include <iostream>
using namespace std;

int main() {
	int num=5;
	cout<<num<<endl;
	
	cout<<"address of num is "<<&num <<endl;
	
	int *ptr = &num;
	cout<<"value is: "<<*ptr<<endl;	
	cout<<"Address is: "<<ptr<<endl;
		
    double d= 4.8;
	double *p = &d;
	cout<<"value is: "<<*p<<endl;	
	cout<<"Address is: "<<p<<endl;
	    
	cout<< "Size of integer is "<< sizeof(num)<<endl;
	cout<< "Size of pointer is "<< sizeof(ptr)<<endl;
	cout<< "Size of pointer2 is "<< sizeof(p)<<endl;
     
     //ways to initialise a pointer
     int i=5;
     int *q =&i;
     cout<<q<<endl;
     cout<<*q<<endl;
     
     int *p2 =0;
     p2 = &i;
     cout<<p2<<endl;
     cout<<*p2<<endl;
     
     
     int a = num;
     a++;
     
     cout<<"Num is: "<< num<<endl;
     cout<<"a is: "<<a<<endl;
     
     int b=*ptr;
     b++;
     cout<<"Num is: "<<num<<endl;
     cout<<"b is: "<<b<<endl;
     (*ptr)++;
     cout<<"Num is: "<<num<<endl;
     //copying a pointer
     int *s=ptr;
     cout<<ptr<<" -- "<<s<<endl;
     cout<<*ptr<<" -- "<<*s<<endl;
     
     int j=10;
     int *t=&i;
     *t=*t+1;
     cout<<*t<<endl;
     cout<<"before t" <<t<<endl;
     t=t+1;
     cout<<"after t "<<t<<endl;
	return 0;
} 
