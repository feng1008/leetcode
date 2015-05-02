#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
	ListNode *h1=head,*h2=head;
	while(h1&&h2){
		if (!h1->next || !h2->next || !h2->next->next){
			return false;
		}
		h1 = h1->next;
		h2 = h2->next->next;
		if (h1 == h2 && h1) return true;
	}
}

int main(){
	system("pause");
	return 0;
}