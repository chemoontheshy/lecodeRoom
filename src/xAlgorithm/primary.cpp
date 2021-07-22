#include "primary.h"

PAlogrithm::PAlogrithm()
{

}

PAlogrithm::~PAlogrithm()
{

}

int PAlogrithm::removeDuplicates(vector<int>& nums)
{
	vector<int> temp_nums;
	for (auto i : nums)
	{
		if (!count(temp_nums.begin(), temp_nums.end(), i))
			temp_nums.push_back(i);
	}
	nums.swap(temp_nums);
	return nums.size();
}

int PAlogrithm::maxProfit(vector<int>& prices)
{
	int last_one=-1;
	int profit = 0;
	for (auto i : prices)
	{
		if (last_one == -1)
			last_one = i;
		if (i > last_one){
			profit = profit + (i - last_one);
		}
		last_one = i;
	}
	return profit;
}

void PAlogrithm::rotate(vector<int>& nums, int k)
{
	if (k > nums.size())
		k = k % nums.size();
	if (k == 0)
		return;
	vector<int> temp_back(nums.begin(),nums.end()-k);
	vector<int> temp_front(nums.begin()+(nums.size()-k), nums.end());
	temp_front.insert(temp_front.end(), temp_back.begin(), temp_back.end());
	nums.swap(temp_front);
}

bool PAlogrithm::containsDuplicate(vector<int>& nums)
{
	sort(nums.begin(),nums.end());
	auto a = unique(nums.begin(), nums.end());
	return unique(nums.begin(), nums.end())!=nums.end();
}

int PAlogrithm::singleNumber(vector<int>& nums)
{
	int ans = 0;
	for (auto i : nums)
	{
		ans ^= i;
	}
	return ans;
}

vector<int> PAlogrithm::intersect(vector<int>& nums1, vector<int>& nums2)
{
	vector<int> nums;
	if (nums1.size() > nums2.size()) {
		for (auto i : nums2) {
			if (count(nums1.begin(), nums1.end(), i)) {
				nums.push_back(i);
			}
			
		}
	}
	else {
		for (auto i : nums1) {
			if (count(nums2.begin(), nums2.end(), i))
				nums.push_back(i);
		}
	}
	return nums;
}