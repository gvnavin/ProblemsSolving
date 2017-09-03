/*
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
	int maximumSumSubsequenceHelper(vector<int> &nums, int index, map<int,int> &cache) {

		if (index >= nums.size()) return 0;

		map<int,int>::iterator iter = cache.find(index);
		if (iter != cache.end()) {
			return iter->second;
		}

		int nextLargerValueIndex = index+1;
		while (nextLargerValueIndex < nums.size() && nums[index] >= nums[nextLargerValueIndex]) {
			++nextLargerValueIndex;
		}
		int includingCurrentValue = maximumSumSubsequenceHelper(nums, nextLargerValueIndex, cache) + nums[index];
		int excludingCurrentValue = maximumSumSubsequenceHelper(nums, index+1, cache);
		int output = max(includingCurrentValue,excludingCurrentValue);
		cache.insert(make_pair(index,output));
		return output;
	}
public:
	int maximumSumSubsequence(vector<int> &nums) {
		map<int,int> cache;
		return maximumSumSubsequenceHelper(nums, 0, cache);
	}
};

int main() {
	int numsArr[] = {1, 101, 2, 3, 100, 4, 5};
	vector<int> nums(numsArr, numsArr + sizeof(numsArr)/sizeof(int));
	int output = Solution().maximumSumSubsequence(nums);
	system("pause");
}*/