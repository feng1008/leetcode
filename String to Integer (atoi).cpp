#include<iostream>
using namespace std;

int myAtoi(string str) {
	int i=0,sym=1;
    long long num=0;
    bool hassym=false;
    while(str[i]==' '&&str[i]!='\0'){
    	i++;
    }
    if(str[i]=='\0'){
    	return 0;
    }
    	
    if(str[i]=='-'){
    	sym=-1;i++;hassym=true;
    }
    else if(str[i]=='+'){
    	sym=1;i++;hassym=true;
    }
    	
    for(;i<str.size();i++){
    	if(str[i]==' '){
    	    break;
    	}
    	if(str[i]=='-'||str[i]=='+'){
    	    if(hassym)
    	        return 0;
    	    else{
    	        if(str[i]=='-'){
    	            sym=-1;
    	        }else{
    	            sym=1;
    	        }
    	    }
    	    continue;
    	}
    	if(str[i]<='9'&&str[i]>='0'){
        	num=num*10+(str[i]-'0');
        	if(sym==1&&num*sym>2147483647){
        		return 2147483647;
        	}
        	if(sym==-1&&num*sym<-2147483648){
        		return -2147483648;
        	}
    	}
    	else{
    		break;
    	}
    }
    	
    num*=sym;
    return num;
}

int main(){
	cout<<myAtoi("23546")<<endl;
	system("pause");
	return 0;
}