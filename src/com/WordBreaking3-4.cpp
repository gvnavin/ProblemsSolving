/*
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct valueHolder {
	bool isValid;
	int previousIndex;
	valueHolder() {
		isValid = false;
		previousIndex = -1;
	}
	valueHolder(bool valid, int prevIndex) {
		isValid = valid;
		previousIndex = prevIndex;
	}
};

class Solution {

public:
	vector<string> wordBreaking(string word, set<string>& dictionary) {

		int length = word.length();
		struct valueHolder* cache = new struct valueHolder[length];

		for (int i=0; i<length; i++) {
			string currentWord = word.substr(0, i+1);
			bool isSubWordValid = false;
			int previousIndex = -1;
			if (dictionary.count(currentWord) == 1) {
				isSubWordValid = true;
				previousIndex = -1;
			}
			if (!isSubWordValid) {
				for (int j=i-1; j>=0; j--) {
					if (cache[j].isValid) {
						int length = i-j;
						string right = word.substr(j+1, length);
						if (dictionary.count(right) == 1) {
							isSubWordValid = true;
							previousIndex = j;
							break;
						}
					}
				}
			}
			cache[i].isValid = isSubWordValid;
			cache[i].previousIndex = previousIndex;
		}

		vector<string> output;
		if (!cache[length-1].isValid) return output;
		int index = length -1;
		while (index >= 0) {
			int length = index - cache[index].previousIndex;
			string subString = word.substr(cache[index].previousIndex + 1, length);
			output.push_back(subString);
			index = cache[index].previousIndex;
		}

		delete[] cache;
		reverse(output.begin(), output.end());
		return output;
	}

};

int main() {
	string word = "handlingandbeyond";
	set<string> dictionary;
	dictionary.insert("hand");
	dictionary.insert("handling");
	dictionary.insert("and");
	dictionary.insert("bat");
	dictionary.insert("beyond");
	vector<string> output = Solution().wordBreaking(word, dictionary);
}*/