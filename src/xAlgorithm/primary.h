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

	/// <summary>
	/// 给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
	/// </summary>
	/// <param name="nums">由 整数 组成的 非空 数组</param>
	/// <returns>数据值+1</returns>
	vector<int> plusOne(vector<int>& nums);


	/// <summary>
	/// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
	/// 必须在原数组上操作，不能拷贝额外的数组。尽量减少操作次数。
	/// 尽量减少操作次数
	/// </summary>
	/// <param name="nums">数组nums</param>
	void moveZeroes(vector<int>& nums);

	/// <summary>
	/// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
	//  你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
	//	你可以按任意顺序返回答案。
	/// </summary>
	/// <param name="nums"></param>
	/// <param name="target"></param>
	/// <returns></returns>
	vector<int> twoSum(vector<int>& nums, int target);

	/// <summary>
	/// 请你判断一个 9x9 的数独是否有效。只需要 根据以下规则 ，验证已经填入的数字是否有效即可。
	/// 数字 1-9 在每一行只能出现一次
	/// 数字 1-9 在每一列只能出现一次。
	/// 数字 1-9 在每一个以粗实线分隔的 3x3 宫内只能出现一次。
	/// </summary>
	/// <param name="board">9x9 的数独</param>
	/// <returns>有效返回true,无效返回false</returns>
	bool isValidSudoku(vector<vector<char>>& board);

	/// <summary>
	/// 给定一个 n × n 的二维矩阵 matrix 表示一个图像。请你将图像顺时针旋转 90 度。
	/// </summary>
	/// <param name="matrix">二维矩阵</param>
	void rotate(vector<vector<int>>& matrix);

	/// <summary>
	/// 反转字符串
	/// </summary>
	/// <param name="s">字符数组 </param>
	void reverseString(vector<char>& s);

	/// <summary>
	/// 给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。
	/// </summary>
	/// <param name="x">32 位的有符号整数 x </param>
	/// <returns>返回将 x 中的数字部分反转后的结果。</returns>
	int reverseInt(int x);


	/// <summary>
	/// 给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。
	/// </summary>
	/// <param name="s">字符串</param>
	/// <returns>存在，返回它的索引。如果不存在，则返回 -1</returns>
	int firstUniqChar(string s);

	/// <summary>
	/// 给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
	/// </summary>
	/// <param name="s">字符串 s</param>
	/// <param name="t">字符串 t</param>
	/// <returns> s 和 t 互为字母异位词返回true,否则返回false</returns>
	bool isAnagram(string s, string t);

	/// <summary>
	/// 双指针
	/// 给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
	/// </summary>
	/// <param name="s">字符串</param>
	/// <returns>是回串文返回true,否则返回false</returns>
	bool isPalindrome(string s);
private:

};




#endif