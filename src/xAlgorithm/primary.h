#pragma once
#ifndef  PRIMARY_H
#define  PRIMARY_H
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class PAlogrithm
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	explicit PAlogrithm();

	/// <summary>
	/// 析构函数
	/// </summary>
	~PAlogrithm();

	/// <summary>
	/// 删除排序数组中的重复项
	/// </summary>
	/// <param name="nums">输入的数组</param>
	/// <returns>返回新数组的长度</returns>
	int removeDuplicates(vector<int>& nums);

	/// <summary>
	/// 买卖股票的最佳时机 II
	/// </summary>
	/// <param name="prices">输入的每天的价格的数组</param>
	/// <returns>最大获利数</returns>
	int maxProfit(vector<int>& prices);

	/// <summary>
	/// 旋转数组
	/// </summary>
	/// <param name="nums">输入的数组</param>
	/// <param name="k">第几个数组开始</param>
	void rotate(vector<int>& nums, int k);

	/// <summary>
	/// 存在重复的元素
	/// </summary>
	/// <param name="nums">输入的数组</param>
	/// <returns>重复返回true,不重复返回false</returns>
	bool containsDuplicate(vector<int>& nums);

	/// <summary>
	/// 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
	/// </summary>
	/// <param name="nums">非空整数数组</param>
	/// <returns>只出现了一次的元素</returns>
	int singleNumber(vector<int>& nums);

	/// <summary>
	/// 给定两个数组，编写一个函数来计算它们的交集。
	/// </summary>
	/// <param name="nums1">数组1</param>
	/// <param name="nums2">数组2</param>
	/// <returns></returns>
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
private:

};




#endif