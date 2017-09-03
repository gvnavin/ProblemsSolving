/*
#include <iostream>

using namespace std;

class Solution {
public:
    bool isMatch(const char *s, const char *p) {

		if (!(*p)) return !(*s);

		char curr = *p;
		char next = *(p+1);
		if (next == '?') {
			if ((*s == *p) || (*p == '.' && *s != '\0') && isMatch(s+1, p+2)) return true;
			return isMatch(s, p+2);
		}
		else if (next == '+') {
			bool output = false;
			while ((*s == *p) || (*p == '.' && *s != '\0') && !output) {
				output = isMatch(s+1, p+2);
				s++;
			}
			return output;
		}
		else if (next == '*') {
			bool output = isMatch(s, p+2);
			if (!output) {
				while ((*s == *p) || (*p == '.' && *s != '\0') && !output) {
					output = isMatch(s+1, p+2);
					s++;
				}
			}
			return output;
		}
		else {
			return ((*s == *p) || (*p == '.' && *s != '0')) && isMatch(s+1, p+1);
		}
    }
};

int main() {
	cout << Solution().isMatch("aaaab", "a+b");
	system("pause");
}*/