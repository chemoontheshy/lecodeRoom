#include "primary.h"
using namespace std;


int main()
{
	PAlogrithm pAlogrithm;
	////≤‚ ‘1
	//vector<int> nums{1,2,2};
	//PAlogrithm pAlogrithm;
	//auto a = pAlogrithm.removeDuplicates(nums);
	//cout << "size: " << a << endl;

	////≤‚ ‘2
	//vector<int> prices{ 2,1,2,0,1 };
	//auto profit = pAlogrithm.maxProfit(prices);
	//cout << "profit: " << profit << endl;

	////≤‚ ‘3
	//vector<int> r_nums{ -1,-100,3,99,2};
	//pAlogrithm.rotate(r_nums, 2);
	//for (auto i : r_nums) {
	//	cout << "r_nums: " << i << endl;
	//}

	////≤‚ ‘4
	//vector<int> contains_nums{ 1,2,3,1 };
	//auto contain_flag =  pAlogrithm.containsDuplicate(contains_nums);
	//cout << "contain_flag: " << contain_flag << endl;


	////≤‚ ‘5
	//vector<int> single_nums{ 2,2,1 ,1,3};
	//auto single = pAlogrithm.singleNumber(single_nums);
	//cout << "single: " << single << endl;

	////≤‚ ‘6
	//vector<int> nums1{ 9,4,9,8,4};
	//vector<int> nums2{ 4,9,5 };
	//auto intersect_nums = pAlogrithm.intersect(nums1, nums2);
	//for (auto i : intersect_nums) {
	//	cout << "intersect_nums : " << i << endl;
	//}


	////≤‚ ‘7
	//vector<int> plus_nums{ 9,9,9 };
	//auto m_plus_nums = pAlogrithm.plusOne(plus_nums);
	//for (auto i : m_plus_nums) {
	//	cout << "m_plus_nums : " << i << endl;
	//}

	////≤‚ ‘8
	//vector<int> move_nums{ 0,1,0,3,12 };
	//pAlogrithm.moveZeroes(move_nums);
	//for (auto i : move_nums) {
	//	cout << "move_nums : " << i << endl;
	//}

	//≤‚ ‘9
	//vector<int> twoSum_nums{ 2,7,11,15 };
	/*auto m_twoSum_nums = pAlogrithm.twoSum(twoSum_nums, 9);
	for (auto i : m_twoSum_nums) {
		cout << "mm_twoSum_nums : " << i << endl;
	}
	vector<char> board1{ 'a' };
	vector<vector<char>> board{ {'.','.','4','.','7','.','6','3','.'},
								{'.','.','.','.','.','.','.','.','.'},
								{'5','.','.','.','.','.','.','9','.'},
								{'.','.','.','5','6','.','.','.','.'},
								{'4','.','3','.','.','.','.','.','.'},
								{'.','.','.','7','.','.','.','.','.'},
								{'.','.','.','5','.','.','.','.','.'},
								{'.','.','.','.','.','.','.','.','.'},
								{'.','.','.','.','.','.','.','.','.'}};
	auto board_flag = pAlogrithm.isValidSudoku(board);
	cout << "board_flag: " << board_flag << endl;*/
	/*vector<char> string_list{ 'o','l','l','e','h' };
	pAlogrithm.reverseString(string_list);
	for (auto i : string_list) {
		cout << "string_list: " << i << endl;
	}

	auto temp_int = pAlogrithm.reverseInt(1264632439);
	cout << "temp_int: " << temp_int<< endl;

	
	auto firstUniqChar_index = pAlogrithm.firstUniqChar("leeltcode");
	cout << "firstUniqChar_index" << firstUniqChar_index << endl;*/

	/*string s = "anagram";
	string t = "nagaram";
	auto temp_anagram = pAlogrithm.isAnagram(s,t);
	cout << "temp_anagram" << temp_anagram << endl;

	string r_s = "";
	auto temp_r_s = pAlogrithm.isPalindrome(r_s);
	cout << "temp_r_s" << temp_r_s << endl;*/

	/*string int_string = "   +0 123";
  	auto temp_int_string = pAlogrithm.myAtoi(int_string);
	cout << "temp_int_string :" << temp_int_string << endl;*/

	string str_string = "mississippi";
	auto index_str_string = pAlogrithm.strStr(str_string, "issip");
	cout << "index_str_string :" << index_str_string << endl;
	return 0;
}