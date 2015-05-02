#include<iostream>
using namespace std;

double myPow(double x, int n){
	if(n==0){
		return 1;
	}
	else if(n<0){
		x=1/x;
		n=-1*n;
	}
	double result=1;
	while(n>0){
		if(n%2==1){
			result*=x;
		}
		n/=2;
		x*=x;
	}
	return result;
}

int main(){
	cout<<myPow(3.21,3)<<endl;
	system("pause");
	return 0;
}