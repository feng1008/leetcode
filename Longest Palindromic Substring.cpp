#include<iostream>
using namespace std;

void print(string s){
	for(int i=0;i<s.size();i++){
		cout<<s[i];
	}
	cout<<endl;
}

string palindrome(string s, int i){
	string str;
	int low1=i,high1=i;
	while(low1>0&&high1<s.size()&&s[low1-1]==s[high1+1]){
		low1--;high1++;
	}
	int low2=i-1,high2=i;
	while(low2>=0&&high2<s.size()&&s[low2]==s[high2]){
		low2--;high2++;
	}
	low2++;high2--;
	if(high1-low1>=high2-low2){
		for(int j=low1;j<=high1;j++){
			str.push_back(s[j]);
		}
	}
	else{
		for(int j=low2;j<=high2;j++){
			str.push_back(s[j]);
		}
	}
	return str;
}

string longestPalindrome(string s){
	string max;
	for(int i=0;i<s.size();i++){
		string temp=palindrome(s,i);
		if(temp.size()>max.size()){
			max=temp;
		}
	}
//	print(max);
	return max;
}

int main(){
	longestPalindrome("sfadfuufdfhuidh");
	system("pause");
	return 0;
}