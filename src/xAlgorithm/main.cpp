#include "primary.h"
using namespace std;


int main()
{
	//≤‚ ‘1
	vector<int> nums{1,2,2};
	PAlogrithm pAlogrithm;
	auto a = pAlogrithm.removeDuplicates(nums);
	cout << "size: " << a << endl;

	//≤‚ ‘2
	vector<int> prices{ 2,1,2,0,1 };
	auto profit = pAlogrithm.maxProfit(prices);
	cout << "profit: " << profit << endl;

	//≤‚ ‘3
	vector<int> r_nums{ -1,-100,3,99,2};
	pAlogrithm.rotate(r_nums, 2);
	for (auto i : r_nums) {
		cout << "r_nums: " << i << endl;
	}

	//≤‚ ‘4
	vector<int> contains_nums{ 1,2,3,1 };
	auto contain_flag =  pAlogrithm.containsDuplicate(contains_nums);
	cout << "contain_flag: " << contain_flag << endl;


	//≤‚ ‘5
	vector<int> single_nums{ 2,2,1 ,1,3};
	auto single = pAlogrithm.singleNumber(single_nums);
	cout << "single: " << single << endl;

	//≤‚ ‘6
	vector<int> nums1{ 1,2,2,1};
	vector<int> nums2{ 2,2 };
	auto intersect_nums = pAlogrithm.intersect(nums1, nums2);
	for (auto i : intersect_nums) {
		cout << "intersect_nums : " << i << endl;
	}
	return 0;
}