#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool pathSum(TreeNode* p, int total, int sum){
	if(p->left==NULL&&p->right==NULL){
		if(p->val+total==sum){
			return true;
		}
		else{
			return false;
		}
	}
	else if(p->left==NULL){
		return pathSum(p->right,p->val+total,sum);
	}
	else if(p->right==NULL){
		return pathSum(p->left,p->val+total,sum);
	}
	else{
		return pathSum(p->left,p->val+total,sum)||pathSum(p->right,p->val+total,sum);
	}
}

bool hasPathSum(TreeNode *root, int sum){
	if(root==NULL){
		return false;
	}
	return pathSum(root, 0, sum);
}

int main(){
	system("pause");
	return 0;
}