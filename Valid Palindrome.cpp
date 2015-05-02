#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0;
    int j = s.size()-1;
        
    while(i<j)
    {
        while(!isAlpha(s[i]))
        {
            i++;
            if(i>=s.size())
            {
                break;
            }
                
        };
            
        while(!isAlpha(s[j]))
        {
            j--;
            if(j<0)
            {
                break;
            }
                
        };
        if(i<j&&!sameAlpha(s[i++],s[j--]))
        {
            return false;
        }
    };
        
    return true;
}
    
bool isAlpha(char c)
{
    if(c - 'a' >= 0 && c - 'a' < 26)
    {
        return true;
    }
    else if(c - 'A' >= 0 && c - 'A' < 26)
    {
        return true;
    }
    else if(c >= '0' && c <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
    
bool sameAlpha(char c1, char c2)
{
    if(c1 == c2)
    {
        return true;
    }
    else if(c1 - 'A' == c2 - 'a')
    {
        return true;
    }
    else if(c1 - 'a' == c2 - 'A')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main(){
	system("pause");
	return 0;
}