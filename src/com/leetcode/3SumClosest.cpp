/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        
		sort(num.begin(), num.end());
		int difference = INT_MAX;
		int answer = INT_MAX;
		for (int i= num.size()-1; i>=2; --i) {

			int index1 = 0;
			int index2 = i-1;
			while (index1 < index2) {
				int value = num[index1] + num[index2] + num[i];
				int currentDifference = abs(value-target);
				if (currentDifference < difference) {
					difference = currentDifference;
					answer = value;
				}
				if (value < target) {
					++index1;
				} else {
					--index2;
				}
			}
		}
		return answer;
    }
};*/