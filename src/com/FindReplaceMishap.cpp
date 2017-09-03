/*
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct OutputPair {
	vector<string> uncatenated;
	int cost;
	OutputPair(int x) : cost(x) {
	}
};

class Solution {

private:
	OutputPair uncatenatePrivate(string input, set<string> &dictionary, int index) {

		if (input.empty()) return OutputPair(0);

		string charsBeforeIndex = input.substr(0, index+1);
		bool isPresentInDictionary = (dictionary.find(charsBeforeIndex) != dictionary.end());
		int cost = isPresentInDictionary ? 0 : charsBeforeIndex.size();
		if (charsBeforeIndex.size() == input.size()) {
			OutputPair output(cost);
			if (cost > 0) {
				std::transform(charsBeforeIndex.begin(), charsBeforeIndex.end(),charsBeforeIndex.begin(), ::toupper);
			}
			output.uncatenated.push_back(charsBeforeIndex);
			return output;
		}
		string charsAfterIndex = input.substr(index+1);
		OutputPair output1 = uncatenatePrivate(charsAfterIndex, dictionary, 0);
		output1.cost += cost;
		OutputPair output2 = uncatenatePrivate(input, dictionary, index+1);
		if (output1.cost < output2.cost) {
			OutputPair output(output1.cost);
			if (cost > 0) {
				std::transform(charsBeforeIndex.begin(), charsBeforeIndex.end(),charsBeforeIndex.begin(), ::toupper);
			}
			output.uncatenated.insert(output.uncatenated.begin(),1, charsBeforeIndex);
			output.uncatenated.insert(output.uncatenated.begin(), output1.uncatenated.begin(), output1.uncatenated.end());
			return output;
		} else {
			return output2;
		}
	}

public:
	vector<string> uncatenate(string input, set<string> dictionary) {
		OutputPair output = uncatenatePrivate(input, dictionary, 0);
		return output.uncatenated;
	}
};

int main() {
	string input = "jesslookedlike";
	set<string> dictionary;
	dictionary.insert("looked");
	dictionary.insert("like");
	dictionary.insert("i");
	dictionary.insert("look");
	dictionary.insert("brother");
	vector<string> output = Solution().uncatenate(input, dictionary);
	system("pause");
}*/