#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode *root) {
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		int maxLeft = maxDepth(root->left);
		int maxRight = maxDepth(root->right);
		return maxLeft<maxRight?maxRight+1:maxLeft+1;
	}
}

int main(){
	system("pause");
	return 0;
}