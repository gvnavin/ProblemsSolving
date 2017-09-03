/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cfloat>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        
		vector<float> numbers(num.begin(),num.end());
		for (int i=0; i< numbers.size(); i++) {
			numbers[i] -= (float(target)/3.0);
		}
		sort(numbers.begin(), numbers.end());
		float difference = FLT_MAX;
		float answer = FLT_MAX;
		for (int i=numbers.size() -1; i>=2; i--) {
			int indexOne = 0;
			int indexTwo = i-1;
			while (indexOne < indexTwo) {
				float absValue = abs(numbers[indexOne] + numbers[indexTwo] + numbers[i]);
				if (absValue < difference) {
					answer = numbers[indexOne] + numbers[indexTwo] + numbers[i];
					difference = absValue;
				}
				numbers[indexOne] + numbers[indexTwo] < -numbers[i] ? ++indexOne : --indexTwo;
			}
		}
		answer = answer + float(target);
		return answer >= 0 ? answer + 0.5 : answer - 0.5;
	}
};

int main() {

	int num[] = {-3,-2,-5,3,-4};
	vector<int> numVector(num, num + sizeof(num)/sizeof(num[0]));
	std::cout << Solution().threeSumClosest(numVector, -1);
	system("pause");
}*/