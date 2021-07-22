#include "primary.h"
using namespace std;


int main()
{
	vector<int> nums{1,2,2};
	PAlogrithm pAlogrithm;
	auto a = pAlogrithm.removeDuplicates(nums);
	cout << "size: " << a << endl;
	return 0;
}