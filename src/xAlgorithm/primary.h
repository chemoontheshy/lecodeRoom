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

private:

};




#endif