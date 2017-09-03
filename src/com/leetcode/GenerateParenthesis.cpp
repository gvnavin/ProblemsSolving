/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
		vector<string> output;
        generateParenthesisHelper(0, 0, n, "", output);
		return output;
    }

	void generateParenthesisHelper(int opened, int closed, int n,string current, vector<string>& output) {

		if (closed > opened) return;
		if (opened == n && closed == n) output.push_back(current);

		if (opened < n) {
			generateParenthesisHelper(opened+1, closed, n, current + "(", output);
		}
		if (closed < n) {
			generateParenthesisHelper(opened, closed+1, n, current + ")", output);
		}
	}
};

int main() {
	vector<string> output = Solution().generateParenthesis(3);
	system("pause");
}*/