#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int num(TreeNode * p, int n){
	if(p->left==NULL&&p->right==NULL){
		return 10*n+p->val;
	}
	else if(p->left==NULL){
		return num(p->right,10*n+p->val);
	}
	else if(p->right==NULL){
		return num(p->left,10*n+p->val);
	}
	else{
		return num(p->left,10*n+p->val)+num(p->right,10*n+p->val);
	}
}

int sumNumbers(TreeNode *root) {
	if(root==NULL){
		return 0;
	}
	return num(root, 0);
}

int main(){
	system("pause");
	return 0;
}