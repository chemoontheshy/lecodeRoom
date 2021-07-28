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
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());
	int i = 0;
	int j = 0;
	while (i < nums1.size() && j < nums2.size()) {
		if (nums1.at(i) > nums2.at(j)) {
			j++;
		}
		else if (nums1.at(i) == nums2.at(j)) {
			nums.push_back(nums1.at(i));
			i++;
			j++;
		}
		else if(nums1.at(i) < nums2.at(j)){
			i++;
		}
		cout << "i:" << i << " j: " << j << endl;
	}
	
	return nums;
}

vector<int> PAlogrithm::plusOne(vector<int>& nums)
{
	vector<int> m_nums(nums);
	reverse(m_nums.begin(), m_nums.end());
	m_nums[0] = m_nums[0] + 1;
	if (m_nums.front() == 10) {
		for (size_t i = 0; i < m_nums.size(); i++) {
			if (m_nums.at(i) == 10) {
				m_nums.at(i) = 0;
				if ((i + 1) == m_nums.size()) {
					m_nums.push_back(1);
				}
				else {
					m_nums.at(i + 1) = m_nums.at(i + 1) + 1;
				}
			}
		}
	}
	reverse(m_nums.begin(), m_nums.end());
	return m_nums;
}

void PAlogrithm::moveZeroes(vector<int>& nums)
{
	size_t zero_count = 0;
	for (size_t i = 0; i < nums.size(); i++) {
		if (nums.at(i) == 0) {
			zero_count++;
		}
		else {
			nums.at(i - zero_count) = nums.at(i);
			if (zero_count > 0) {
				nums.at(i) = 0;
			}
		}
	}
}

vector<int> PAlogrithm::twoSum(vector<int>& nums, int target)
{
	vector<int> m_nums;
	for (size_t i = 0; i < nums.size()-1; i++) {
		if (nums.at(i) > target)
			continue;
		for (size_t j = 0; j < nums.size(); j++) {
			if (nums.at(i) > target)
				continue;
			if (nums.at(i) + nums.at(j) == target &&i != j) {
				m_nums.push_back(i);
				m_nums.push_back(j);
				return m_nums;
			}
		}
	}

	return m_nums;
}

bool PAlogrithm::isValidSudoku(vector<vector<char>>& board)
{
	vector<vector<char>> column_list(9, vector<char>(9));
	vector<vector<char>> cell_list(9,vector<char>(9));
	for (size_t i = 0; i < 9; i++) {
		vector<char> row_list;
		for (size_t j = 0; j < 9; j++) {
			if (board[i][j] == '.') {
				continue;
			}
			else if (!count(row_list.begin(), row_list.end(), board[i][j])) {
				row_list.push_back(board[i][j]);
			}
			else {
				return false;
			}
			//column
			if (!count(column_list[j].begin(), column_list[j].end(), board[i][j])) {
				column_list[j].push_back(board[i][j]);
			}
			else {
				return false;
			}
			//cell
			size_t cell_index = (i / 3)*3+j/3;
			if (!count(cell_list[cell_index].begin(), cell_list[cell_index].end(), board[i][j])) {
				cell_list[cell_index].push_back(board[i][j]);
			}
			else {
				return false;
			}
		}
	}
	return true;
}

void PAlogrithm::rotate(vector<vector<int>>& matrix)
{
	//TODO
}

void PAlogrithm::reverseString(vector<char>& s)
{
	for (size_t i = 0; i < s.size(); i++) {
		if (i >= s.size() - i) {
			break;
		}
		char tmep = s.at(i);
		s.at(i) = s.at(s.size() - i-1);
		s.at(s.size() - i-1) = tmep;
	}
}

int PAlogrithm::reverseInt(int x)
{
	auto m_x = abs(x);
	int r_x = 0;
	while (m_x) {
		if (r_x  > INT32_MAX/10 || r_x <-INT32_MAX / 10) {
			return 0;
		}
		r_x = r_x * 10 + m_x % 10;
		m_x /= 10;
	}
	return x >= 0 ? r_x : 0 - r_x;
}

int PAlogrithm::firstUniqChar(string s)
{
	size_t temp_char[26]{0};
	for (int i = 0; i < s.length(); i++) {
		temp_char[s[i] - 'a']++;
	}
	for (int i = 0; i < s.length(); i++) {
		if (temp_char[s[i] - 'a'] == 1)
			return i;
	}
	return -1;
}

bool PAlogrithm::isAnagram(string s, string t)
{
	vector<char> temp_s;
	vector<char> temp_t;
	if (s.length() != t.length()) {
		return false;
	}
	size_t i = 0;
	while (i < s.length()) {
		temp_s.push_back(s[i]);
		temp_t.push_back(t[i]);
		i++;
	}
	sort(temp_s.begin(),temp_s.end());
	sort(temp_t.begin(), temp_t.end());
	return temp_s == temp_t ? true : false ;
}

bool PAlogrithm::isPalindrome(string s)
{
	if (s.length() == 0) {
		return true;
	}
	size_t right = 0;
	for (size_t i = 0; i < s.length(); i++) {
		if ('a' <= s[i] && 'z' >= s[i] || '0' <= s[i] && '9' >= s[i]) {
			s[right++] = s[i];
		}
		else if ('A' <= s[i] && 'Z' >= s[i]) {
			s[right++] = s[i]+32;
		}
	}
	if (right < 1) {
		return false;
	}
	size_t left = 0;
	while (left < right-1) {
		if (s[left] != s[right - 1]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int PAlogrithm::myAtoi(string s)
{
	double temp_s = 0;
	bool flag = true;
	//positive and negative
	bool positive = true;
	for (size_t index = 0; index < s.length(); index++) {
		if (flag &&s[index] == ' ') {
			continue;
		}
		else if (flag && s[index] == '+') {
			flag = false;
			continue;
		}
		else if (flag && s[index] == '-') {
			flag = false;
			positive = false;
			continue;
		}
		else if (s[index] < '0' || s[index]>'9') {
			break;
		}
		else {
			flag = false;
			temp_s = temp_s * 10 + (s[index] - static_cast<int>('0'));
			if (temp_s > INT32_MAX) {
				return positive ? INT32_MAX : INT32_MIN;
			}
			
		}
	}
	return positive ? (int)temp_s : (int)(-temp_s);
}
