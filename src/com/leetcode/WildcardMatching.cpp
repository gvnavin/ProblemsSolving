/*
#include <iostream>

using namespace std;

class Solution {
public:
    bool isMatch(const char *s, const char *p) {

        if (*p == '\0') return *s == '\0';
        
        if (*p == '*') {
            while (*s != '\0') {
                if (isMatch(s,p+1)) return true;
                ++s;
            }
            return isMatch(s,p+1);
        } else {
            return (*s == *p || (*p == '?' && *s != '\0')) && isMatch(s+1,p+1);
        }
    }
};*/