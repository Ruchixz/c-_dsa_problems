#include <iostream>
using namespace std;

int main() {
	int a;
	cout<< "Enter amount"<< endl;
	cin>>a;

	 int b, c, d, e, f;
	 b=c=d=e=f=0;
	 
	 switch(a>=100) {
	 	case 1: 
	 	b= a/100;
	 	a-= b*100;
	 	break;
	 }
	 switch (a>=50){
	 	case 1:
	 	c=a/50;
	 	a-=c*50;
	 	break;
	 }
	 switch (a>=20){
	 	case 1:
	 	d=a/20;
	 	a-=d*20;
	 	break;
	 }
	 switch (a>=10){
	 	case 1:
	 	e=a/10;
	 	a-=e*10;
	 	break;
	}
	switch (a>=1) {
		case 1:
		f=a/1;
		a-=f;
		break;
	}
	
	 cout<< "No. of Rs.100 notes" << b<<endl;
	 cout<< "No. of Rs.50 notes" << c<<endl;
	 cout<< "No. of Rs.20 notes" << d<<endl;
	 cout<< "No. of Rs.10 notes" << e<<endl;
	 cout<< "No. of Rs.1 notes" << f<<endl;
	return 0;
}
