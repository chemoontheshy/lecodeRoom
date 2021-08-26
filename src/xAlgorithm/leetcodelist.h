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
	/// 删除某个链表中给定的（非末尾）节点。传入函数的唯一参数为 要被删除的节点 。
	/// </summary>
	/// <param name="node"></param>
	void deleteNode(ListNode* node);

	/// <summary>
	/// 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
	/// </summary>
	/// <param name="head">链表</param>
	/// <param name="n">第 n 个结点</param>
	/// <returns>头结点</returns>
	ListNode* removeNthFromEnd(ListNode* head, int n);

	/// <summary>
	/// 反转链表 方法：三指针
	/// </summary>
	/// <param name="head">链表</param>
	/// <returns>反转链表</returns>
	ListNode* reverseList(ListNode* head);

	/// <summary>
	/// 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
	/// </summary>
	/// <param name="l1">升序链</param>
	/// <param name="l2">升序链</param>
	/// <returns></returns>
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);

	/// <summary>
	/// 阶乘，递归
	/// </summary>
	/// <param name="n">输入一个数字</param>
	/// <returns>返回阶乘</returns>
	int recursion(int n);

}


#endif