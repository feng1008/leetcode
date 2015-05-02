#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int> > &matrix, int target) {  
    int i =matrix.size()-1; int j=0;  
    int n = matrix.size(); int m = matrix[0].size();  
    while(i>=0&&j<m)  
    {  
        if(matrix[i][j]==target)  
        {  
            return true;  
        }  
        else if(matrix[i][j]<target)  
        {  
            j++;  
        }  
        else  
        {  
            i--;  
        }  
    }  
    return false;  
}  

int main(){
	system("pause");
	return 0;
}