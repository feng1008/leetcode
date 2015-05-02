#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> inorderTraversal(TreeNode *root) {
	if(root==NULL){
		return vector<int>();
	}
	vector<int> left=inorderTraversal(root->left);
	left.push_back(root->val);
	vector<int> right=inorderTraversal(root->right);
	for(int i=0;i<right.size();i++){
		left.push_back(right[i]);
	}
	return left;
}

int main(){
	system("pause");
	return 0;
}