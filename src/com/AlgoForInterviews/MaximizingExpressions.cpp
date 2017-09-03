/*
#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct term {
	int value;
	char op;
	term() {
		value = INT_MIN;
		op = ' ';
	}
	term(int val) {
		value = val;
		op = ' ';
	}
	term(char o) {
		op = o;
		value = INT_MIN;
	}
};

struct outputTerm {
	int max;
	int min;
};

class Solution {
public:
	int expressionMaximum(vector<term>& expression) {
		if (expression.empty()) return 0;
		map<pair<int, int>, outputTerm> cache;
		struct outputTerm output = expressionMaximumHelper(expression, 0, expression.size()-1, cache);
		return output.max;
	}

	struct outputTerm expressionMaximumHelper(vector<term>& expression, int start, int end, 
		map<pair<int, int>, outputTerm>& cache) {
			
		pair<int, int> cacheKey(start, end);
		map<pair<int, int>, outputTerm>::iterator it;
		it = cache.find(cacheKey);
		if (it != cache.end()) {
			return it->second;
		}
		
		struct outputTerm output;
		if (start == end) {
			output.max = expression[start].value;
			output.min = expression[start].value;
			return output;
		}

		output.max = INT_MIN;
		output.min = INT_MAX;
		for (int i=start+1; i<end; i+=2) {
			struct outputTerm leftOutput = expressionMaximumHelper(expression, start, i-1, cache);
			struct outputTerm rightOutput = expressionMaximumHelper(expression, i+1, end, cache);
			char op = expression[i].op;
			if (op == '+') {
				output.max = max(leftOutput.max + rightOutput.max, output.max);  
				output.min = min(leftOutput.min + rightOutput.min, output.min);
			}
			else if (op == '*') {
				int multHigh = leftOutput.max * rightOutput.max;
				int multLow = leftOutput.min * rightOutput.min;
				int cross1 = leftOutput.max * rightOutput.min;
				int cross2 = leftOutput.min * rightOutput.max;
				output.max = max(max(max(max(multHigh, multLow), cross1), cross2), output.max);
				output.min = min(min(min(min(multHigh, multLow), cross1), cross2), output.min);
			}
			else if (op == '-') {
				output.max = max(leftOutput.max - rightOutput.min, output.max); 
				output.min = min(leftOutput.min - rightOutput.max, output.min);
			}
		}

		cache.insert(pair<pair<int, int>, outputTerm>(cacheKey, output));
		return output;
	}
};

int main() {
	struct term expression[7];
	expression[0].value = 5;
	expression[1].op = '-';
	expression[2].value = 3;
	expression[3].op = '*';
	expression[4].value = 4;
	expression[5].op = '+';
	expression[6].value = 6;
	vector<term> exp(expression, expression + sizeof(expression)/sizeof(expression[0]));
	cout << Solution().expressionMaximum(exp);
	system("pause");
}*/