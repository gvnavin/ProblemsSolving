/*
#include <iostream>
#include <vector>
using namespace std;

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
 };


class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
		vector<Interval> output;

		vector<Interval>::iterator iter=intervals.begin();
		for (; iter != intervals.end(); iter++) {
			if (newInterval.start < iter->start) {
				intervals.insert(iter, newInterval);
				break;
			}
		}
		if (iter == intervals.end()) {
			intervals.insert(iter, newInterval);
		}

		Interval prev = intervals[0];
		for (int i=1; i<intervals.size(); i++) {
			Interval curr = intervals[i];
			if (!(curr.start > prev.end)) {
				prev.start = min(curr.start, prev.start);
				prev.end = max(curr.end, prev.end);
			} else {
				output.push_back(prev);
				prev = curr;
			}
		}
		output.push_back(prev);
		return output;
    }
};*/