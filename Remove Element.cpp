#include<iostream>
#include<algorithm>
using namespace std;


int removeElement(int a[], int n, int elem){
	for(int i=0;i<n;i++){
		if(a[i]==elem){
			swap(a[i],a[n-1]);
			i--;
			n--;
		}
	}
	return n;
}

int main(){
	int a[]={1,2,2,2,4,3,5,6,4,3,4,2};
	cout<<removeElement(a,sizeof(a)/sizeof(int),2)<<endl;
	system("pause");
	return 0;
}