/*
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
	bool isScrambleHelper(string s1, string s2, map<pair<string,string>,bool>& cache) {
		if (s1.empty()) return true;
		if (s1.size() == 1) return s1[0] == s2[0];

		pair<string,string> cacheKey(s1,s2);
		map<pair<string,string>,bool>::iterator iter = cache.find(cacheKey);
		if (iter != cache.end()) {
			return iter->second;
		}

		for (int i=1; i<s1.size(); ++i) {
			int leftHalf = i;
			int rightHalf = s1.size() - leftHalf;
			bool alternate1 = isScrambleHelper(s1.substr(0, leftHalf), s2.substr(0, leftHalf), cache);
			if (alternate1) {
				bool alternate2 = isScrambleHelper(s1.substr(leftHalf), s2.substr(leftHalf),cache);
				if (alternate2) {
					cache.insert(pair<pair<string,string>,bool>(cacheKey,true));
					return true;
				}
			}
			bool alternate3 = isScrambleHelper(s1.substr(0, leftHalf), s2.substr(rightHalf),cache);
			if (alternate3) {
				bool alternate4 = isScrambleHelper(s1.substr(leftHalf), s2.substr(0,rightHalf),cache);
				if (alternate4) {
					cache.insert(pair<pair<string,string>,bool>(cacheKey,true));
					return true;
				}
			}
		}
		cache.insert(pair<pair<string,string>,bool>(cacheKey,false));
		return false;
	}

    bool isScramble(string s1, string s2) {
		map<pair<string,string>,bool> cache;
		return isScrambleHelper(s1,s2,cache);
    }
};

int main() {
	cout << Solution().isScramble("abab", "baba");
	system("pause");
}*/