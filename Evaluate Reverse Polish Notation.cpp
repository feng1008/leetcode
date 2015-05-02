#include<iostream>
#include <string>
#include<vector>
#include<stack>
using namespace std;

int evalRPN(vector<string> &tokens) {
    stack<int> st;
	for (auto &s: tokens) {
		if (s.length() > 1 || isdigit(s[0])) st.push(stoi(s));
		else {
			int num1 = st.top(); st.pop();
			int num2 = st.top(); st.pop();
			if (s[0] == '+') num2 += num1;
			if (s[0] == '-') num2 -= num1;
			if (s[0] == '*') num2 *= num1;
			if (s[0] == '/') num2 /= num1;
			st.push(num2);
		}
	}
    return st.top();
}

int main(){
	system("pause");
	return 0;
}