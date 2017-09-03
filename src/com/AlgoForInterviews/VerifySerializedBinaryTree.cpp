/*
#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> stk;
		int n = s.length();
		for (int i=0; i<n; ++i) {
			char currentChar = s[i];
			stk.push(currentChar);
			if (currentChar == ')') {
				bool done = false;
				while (!done && stk.size() >= 4) {
					char last = stk.top(); stk.pop();
					char secondLast = stk.top(); stk.pop();
					char thirdLast = stk.top(); stk.pop();
					char fourthLast = stk.top(); stk.pop();
					if (last == ')' && secondLast == '0' && thirdLast == '0' && fourthLast == '(') {
						stk.push('0');
					} else {
						stk.push(fourthLast);
						stk.push(thirdLast);
						stk.push(secondLast);
						stk.push(last);
						done = true;
					}
				}
			}
		}
		if (stk.size() == 1 && stk.top() == '0') return true;
		return false;
	}
};

int main() {
	bool output = Solution().isValid("(((00)(00))(0(0(00))))");
	system("pause");
}*/