#pragma once
#ifndef  LEETCODELIST_H
#define  LEETCODELIST_H
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

namespace CodeList {
	
	struct ListNode {
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	
	};
	/// <summary>
	/// ɾ��ĳ�������и����ģ���ĩβ���ڵ㡣���뺯����Ψһ����Ϊ Ҫ��ɾ���Ľڵ� ��
	/// </summary>
	/// <param name="node"></param>
	void deleteNode(ListNode* node);

	/// <summary>
	/// ����һ������ɾ������ĵ����� n ����㣬���ҷ��������ͷ��㡣
	/// </summary>
	/// <param name="head">����</param>
	/// <param name="n">�� n �����</param>
	/// <returns>ͷ���</returns>
	ListNode* removeNthFromEnd(ListNode* head, int n);

	/// <summary>
	/// ��ת���� ��������ָ��
	/// </summary>
	/// <param name="head">����</param>
	/// <returns>��ת����</returns>
	ListNode* reverseList(ListNode* head);

	/// <summary>
	/// ��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ� 
	/// </summary>
	/// <param name="l1">������</param>
	/// <param name="l2">������</param>
	/// <returns></returns>
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);

	/// <summary>
	/// �׳ˣ��ݹ�
	/// </summary>
	/// <param name="n">����һ������</param>
	/// <returns>���ؽ׳�</returns>
	int recursion(int n);

}


#endif