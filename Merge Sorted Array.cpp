#include<iostream>
using namespace std;

void print(int a[],int m){
	for(int i=0;i<m;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void merge(int a[], int m, int b[], int n){
	int i=m-1,j=n-1,k=m+n-1;
	while(i>=0&&j>=0){
		if(a[i]<b[j]){
			a[k--]=b[j--];
		}
		else{
			a[k--]=a[i--];
		}
	}
	if(i<0){
		while(j>=0){
			a[k--]=b[j--];
		}
	}
	print(a,m+n);
}

int main(){
	int a[]={3,6,8,9,12,15,46,78};
	int b[]={1,4,6,8,10,25,48};
	int a_len=sizeof(a)/sizeof(int),b_len=sizeof(b)/sizeof(int);
	print(a,a_len);
	print(b,b_len);
	merge(a,a_len,b,b_len);

	system("pause");
	return 0;
}