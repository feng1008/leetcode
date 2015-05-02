#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
		int begin=0,end=s.size()-1;

		swapString(s,begin,end);

		while(begin<=end){
			if(s[begin]==' '){
				begin++;
			}
			else{
				int i=begin;
				while(s[begin]!=' '&&begin!=end){
					begin++;
				}
				if(begin==end&&s[end]!=' '){
					swapString(s,i,begin);
				}
				else{
					swapString(s,i,begin-1);
				}
				begin++;
			}
		}
		//for(int i=begin;i!=end;i++){
		//	if(s[i]!=' '){
		//		int j=i;
		//	}
		//}
		print(s);
    }

	void reverseWords(string &s){
		stack<int> sentence;
		stack<int> word;
		int begin=0,end=s.size()-1;
		for(i=end;i!=begin;i--){
			sentence.push(s[i]);
		}

	}

	void swapString(string &s, int begin, int end){
		while(begin<end){
			char temp=s[begin];
			s[begin]=s[end];
			s[end]=temp;
			begin++;end--;
		}
	}

	void print(string s){
		for(auto it=begin(s);it!=end(s);it++){
			cout<<*it;
		}
		cout<<endl;
	}
};


int main(char* argc[], int argv){
	Solution a;
	string str=" the sky is  blue ";
	a.reverseWords(str);
	system("pause");
	return 0;
}