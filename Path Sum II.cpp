#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void pathSum(TreeNode * p, int total, int sum, vector<int> temp, vector<vector<int>> * v){
	if(p->left==NULL&&p->right==NULL){
		if((total+p->val)==sum){
			temp.push_back(p->val);
			v->push_back(temp);
		}
	}
	else if(p->left==NULL){
		temp.push_back(p->val);
		pathSum(p->right,total+p->val,sum,temp,v);
	}
	else if(p->right==NULL){
		temp.push_back(p->val);
		pathSum(p->left,total+p->val,sum,temp,v);
	}
	else{
		temp.push_back(p->val);
		pathSum(p->left,total+p->val,sum,temp,v);
		pathSum(p->right,total+p->val,sum,temp,v);
	}
}

vector<vector<int>> pathSum(TreeNode *root, int sum){
	vector<vector<int>>* v=new vector<vector<int>>();
	if(root==NULL){
		return *v;
	}
	vector<int> temp;
	pathSum(root, 0, sum, temp, v);
	return *v;
}

int main(){
	system("pause");
	return 0;
}