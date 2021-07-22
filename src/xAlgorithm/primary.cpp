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