#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool compare(TreeNode * node1, TreeNode * node2){
	if(node1==NULL&&node2==NULL){
		return true;
	}
	else if(node1!=NULL&&node2!=NULL&&node1->val==node2->val){
		return (compare(node1->left,node2->right)&&compare(node1->right,node2->left));
	}
}

bool isSymmetric(TreeNode *root) {
	return compare(root,root); 
}

int main(){
	system("pause");
	return 0;
}