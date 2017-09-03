/*
#include <iostream>

class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        if (*p == '\0') return *s == '\0';

    	char ch = *p;
		char nextCh = *(p+1);
		if (nextCh == '*') {
			while ((*s == *p) || (ch == '.' && *s != '\0')) {
				if (isMatch(s, p+2)) return true;
				++s;
			}
			return isMatch(s, p+2);
		} else if (nextCh == '+') {
			while ((*s == *p) || (ch == '.' && *s != '\0')) {
				if (isMatch(s+1, p+2)) return true;
				++s;
			}
            return false;
		} else if (nextCh == '?') {
			if (isMatch(s, p+2)) return true;
			return ((*s== *p) || (ch == '.' && *s != '\0')) && isMatch(s+1,p+2);
		} else {
			return ((*s== *p) || (ch == '.' && *s != '\0')) && isMatch(s+1,p+1);
		}
    }
};*/