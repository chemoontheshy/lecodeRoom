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

private:

};




#endif