#include<iostream>
using namespace std;

int lengthOfLastWord(const char *s) {  
    int len = 0;  
    while(s[len] != '\0')  
    {  
        len++;  
    }  
    int i = len - 1;  
    int j = len - 1;  
    for(; i >= 0; i--)  
    {  
        if(s[i] != ' ')  
        {  
            j = i;  
            break;  
        }  
    }  
          
    if(i == -1)  
    {  
        return 0;  
    }  
    for(; i >= 0; i--)  
    {  
        if(s[i] == ' ')  
        {  
            break;  
        }  
    }  
          
    if(i == -1)  
    {  
        return j + 1;  
    }  
    else  
    {  
        return j - i;  
    }  
}  

int main(){
	system("pause");
	return 0;
}