#include<iostream>
using namespace std;

bool valid(char c1,char c2){
	if(c1 == '(' && c2 == ')')  {  
        return true;  
    }  
    else if(c1 == '[' && c2 == ']')  {  
        return true;  
    }  
    else if(c1 == '{' && c2 == '}')  {  
        return true;  
    }  
    else  {  
        return false;  
    }  
}

bool isValid(string s){
	int top=0;
	char* stack=new char[100];
	for(int i=0;i<s.size();i++){
		if(top>0&&valid(stack[top-1],s[i])){
			top--;
		}
		else{
			stack[top++]=s[i];
		}
	}
	return top==0;
}

int main(){
	cout<<isValid("}()[]{")<<endl;
	system("pause");
	return 0;
}