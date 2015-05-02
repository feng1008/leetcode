#include<iostream>
using namespace std;

int reverse(int n){
	int result=0;
	while(n){
		result=10*result+n%10;
		n/=10;
	}
	return result;
}

bool isPalindrome(int x){
	if(x<0){
		return false;
	}
	if(x==0){
		return true;
	}
	if(x==reverse(x)){
		return true;
	}
	return false;
}

int main(){
	cout<<isPalindrome(12321)<<endl;
	system("pause");
	return 0;
}