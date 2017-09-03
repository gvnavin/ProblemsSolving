/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        
        sort(num.begin(), num.end());
		vector<vector<int> > triplets;
		for (int i=num.size()-1; i>=2; ) {

			int index1 = 0;
			int index2 = i-1;
			while (index1 < index2) {
				if (num[index1] + num[index2] + num[i] < 0) {
					++index1;					
					while (index1 < num.size() && (num[index1-1] == num[index1])) {
						++index1;
					}
				} else if (num[index1] + num[index2] + num[i] > 0) {
					--index2;					
					while (index2 >= 0 && (num[index2] == num[index2+1])) {
						--index2;
					}
				} else {
					vector<int> currentTriplet;
					currentTriplet.push_back(num[index1]);
					currentTriplet.push_back(num[index2]);
					currentTriplet.push_back(num[i]);
                    triplets.push_back(currentTriplet);
					++index1;
					while (index1 < num.size() && (num[index1-1] == num[index1])) {
						++index1;
					}
					--index2;
					while (index2 >= 0 && (num[index2] == num[index2+1])) {
						--index2;
					}
				}
			}
            --i;
    		while (i >= 0 && (num[i] == num[i+1])) {
				--i;
			}
		}
		return triplets;
    }
};*/