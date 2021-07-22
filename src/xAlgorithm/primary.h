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
	/// ���캯��
	/// </summary>
	explicit PAlogrithm();

	/// <summary>
	/// ��������
	/// </summary>
	~PAlogrithm();

	/// <summary>
	/// ɾ�����������е��ظ���
	/// </summary>
	/// <param name="nums">���������</param>
	/// <returns>����������ĳ���</returns>
	int removeDuplicates(vector<int>& nums);

	/// <summary>
	/// ������Ʊ�����ʱ�� II
	/// </summary>
	/// <param name="prices">�����ÿ��ļ۸������</param>
	/// <returns>��������</returns>
	int maxProfit(vector<int>& prices);

	/// <summary>
	/// ��ת����
	/// </summary>
	/// <param name="nums">���������</param>
	/// <param name="k">�ڼ������鿪ʼ</param>
	void rotate(vector<int>& nums, int k);

	/// <summary>
	/// �����ظ���Ԫ��
	/// </summary>
	/// <param name="nums">���������</param>
	/// <returns>�ظ�����true,���ظ�����false</returns>
	bool containsDuplicate(vector<int>& nums);

	/// <summary>
	/// ����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
	/// </summary>
	/// <param name="nums">�ǿ���������</param>
	/// <returns>ֻ������һ�ε�Ԫ��</returns>
	int singleNumber(vector<int>& nums);

	/// <summary>
	/// �����������飬��дһ���������������ǵĽ�����
	/// </summary>
	/// <param name="nums1">����1</param>
	/// <param name="nums2">����2</param>
	/// <returns></returns>
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
private:

};




#endif