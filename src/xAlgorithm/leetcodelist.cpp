#include "leetcodelist.h"

void CodeList::deleteNode(ListNode* node)
{
	(*node).val = (*node).next->val;
	(*node).next = (*node).next->next;
}

CodeList::ListNode* CodeList::removeNthFromEnd(ListNode* head, int n)
{
	ListNode* slow = head;
	ListNode* fast = head;
	for (int i = 0; i < n; i++) {
		fast = fast->next;
	}
	if (fast->next == nullptr) return head->next;
	while (fast->next != nullptr) {
		fast = fast->next;
		slow = slow->next;
	}
	slow->next = slow->next->next;
	return head;
}

CodeList::ListNode* CodeList::reverseList(ListNode* head)
{
	ListNode* temp = nullptr;
	ListNode* result = nullptr;
	if (head == nullptr || head->next == nullptr) return head;
	while (head != nullptr)
	{
		temp = head->next;
		head->next = result;
		result = head;
		head = temp;

	}
	return result;
}

CodeList::ListNode* CodeList::mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode* temp = nullptr;
	if (l1 && l2) {
		if (l1->val < l2->val) {
			temp = l1;
			temp->next=mergeTwoLists(l1->next, l2);
		}
		else {
			temp = l2;
			temp->next = mergeTwoLists(l1, l2->next);
		}
	}
	else if(l1 == nullptr) {
		temp = l2;
	}
	else if (l2 == nullptr) {
		temp = l1;
	}
	return temp;
}

int CodeList::recursion(int n)
{
	if (n == 1) return 1;
	return n*recursion(n-1);
}
