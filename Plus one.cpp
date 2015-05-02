#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> &digits){
	int one=1;
	vector<int> temp;
	for(int i=digits.size()-1;i>=0;i--){
		int t=digits[i]+one;
		temp.push_back(t%10);
		one=t/10;
	}
	if(one!=0){
		temp.push_back(one);
	}

	for(int i=0;i<temp.size()/2;i++){
		swap(temp[i],temp[temp.size()-1-i]);
	}
	return temp;
}

int main(){
	system("pause");
	return 0;
}