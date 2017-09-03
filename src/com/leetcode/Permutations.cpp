/*#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {

		vector<vector<int> > output;
		if (num.size() == 0) return output;
		if (num.size() == 1) {
			vector<int> out;
			out.push_back(num[0]);
			output.push_back(out);
			return output;
		}

		for (int i=0; i<num.size(); i++) {
			vector<int> temp;
			temp.insert(temp.end(), num.begin(), (num.begin() + i));
			temp.insert(temp.end(), (num.begin() + i + 1), num.end());
			vector<vector<int> > subOutput = permute(temp);
			for (int j=0; j<subOutput.size(); j++) {
				subOutput[j].insert(subOutput[j].begin(), num[i]);
			}
			output.insert(output.end(), subOutput.begin(), subOutput.end());
		}
		return output;
    }
};

int main() {
	int input[] = {1,2,3};
	vector<int> inputVec(input, input+sizeof(input)/sizeof(input[0]));
	vector<vector<int> > output = Solution().permute(inputVec);
}*/