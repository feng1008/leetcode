#include<iostream>
using namespace std;

int sqrt(int x) {  
    if(x<=1){  
        return x;  
    }  
          
    int left = 1;  
    int right = x;  
          
    while(left<=right){  
        int mid = left + ((right-left)>>1);  
        if(mid == x/mid)  {  
            return mid;  
        }  
        else if(mid < x/mid)  {  
            left = mid + 1;  
        }  
        else{  
            right = mid - 1;  
        }  
    } 
    return right;  
}  

int main(){
	cout<<sqrt(226)<<endl;
	system("pause");
	return 0;
}