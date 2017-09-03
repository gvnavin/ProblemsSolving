/*
// From arvind mohan blog

#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

struct Interval {
	int start;
	int end;
	int score;
	Interval(int start, int end, int score) {
		this->start = start;
		this->end = end;
		this->score = score;
	}
};

bool intervalsort(const Interval &left, const Interval &right) {
	return left.end < right.end;
};

class Solution {
public:
	int maximumNonOverlappingScore(vector<Interval> &intervals) {
		sort(intervals.begin(), intervals.end(), intervalsort);
		map<int, int> cache;
		return maximumNonOverlappingScoreHelper(intervals, 0, cache);
	}

	int maximumNonOverlappingScoreHelper(vector<Interval> &intervals, int startIndex, map<int, int> &cache) {

		if (startIndex == intervals.size()) return 0;

		int cacheKey = startIndex;
		map<int, int>::iterator iter = cache.find(cacheKey);
		if (iter != cache.end()) {
			return iter->second;
		}

		Interval currentInterval = intervals[startIndex];
		int nextNonOverlappingIntervalIndex = startIndex+1;
		while (nextNonOverlappingIntervalIndex < intervals.size() && 
			currentInterval.end > intervals[nextNonOverlappingIntervalIndex].start) {
			++nextNonOverlappingIntervalIndex;
		}
		int includingCurrent = currentInterval.score + maximumNonOverlappingScoreHelper(intervals, nextNonOverlappingIntervalIndex, cache);
		int excludingCurrent = maximumNonOverlappingScoreHelper(intervals, startIndex+1, cache);
		int output = max(includingCurrent, excludingCurrent);
		cache.insert(pair<int,int>(startIndex, output));

		return output;
	}
};

int main() {

	Interval i1(0, 4, 4);
	Interval i2(3, 10, 11);
	Interval i3(6, 8, 8);
	Interval i4(7, 15, 10);
	Interval i5(11, 15, 4);

	vector<Interval> intervals;
	intervals.push_back(i1);
	intervals.push_back(i2);
	intervals.push_back(i3);
	intervals.push_back(i4);
	intervals.push_back(i5);
	int output = Solution().maximumNonOverlappingScore(intervals);
	cout << output;
	system("pause");
}*/