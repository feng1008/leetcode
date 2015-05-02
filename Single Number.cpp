#include<iostream>
using namespace std;

int singleNumber(int A[], int n) {
    int x=0;
    while(--n>=0){
        x^=A[n];
    }
    return x;
}

int main(){
	int a[]={1,1,2,2,3,4,4,5,5,6,6};
	int a_len=sizeof(a)/sizeof(int);
	cout<<singleNumber(a,a_len)<<endl;
	system("pause");
	return 0;
}