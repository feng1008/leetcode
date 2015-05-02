#include<iostream>
#include<ctime>
using namespace std;
const int N=100000;

bool randn(int n){
//	srand((unsigned)time(NULL));
	int temp=rand()%100;
	if(temp<n){
		return true;
	}
	return false;
}

int count2(int a[]){
	int times=0,i=0;
	while(times<100){
		if(i==4){
			return times;
		}
		if(randn(a[i])){
			i++;
		}
		else{
			i--;
		}
		times++;
	}
	return times;
}

void count(int a[]){
	srand((unsigned)time(NULL));
	float sum=0;
	for(int k=0;k<N;k++){
		int times=0,i=0;
		while(times<100){
			if(i==4){
				break;
			}
			int temp=rand()%100;
			if(temp<a[i]){
				i++;
			}
			else{
				i--;
			}
			times++;
		}
		sum+=times;
	}
	cout<<sum/N<<endl;
}

int main(){
	int a[]={100,80,60,40};
	float sum=0;
	srand((unsigned)time(NULL));
	for(int i=0;i<N;i++){
		sum+=count2(a);
	}
	cout<<sum/N<<endl;
//	count(a);
	system("pause");
	return 0;
}