/*
#include <iostream>
#include <vector>

using namespace std;


class TreeUtils {

private:
	static vector<vector<int> > allPossibleInorderPrivate(vector<int> &preorder, int start, int end) {

		vector<vector<int> > output;
		if (start > end) {
			output.push_back(vector<int>());
			return output;
		}
		if (start == end) {
			vector<int> current;
			current.push_back(preorder[start]);
			output.push_back(current);
			return output;
		}

		for (int i=0; i<end-start+1; ++i) {
			vector<vector<int> > leftOutput = allPossibleInorderPrivate(preorder, start+1, start+i);
			vector<vector<int> > rightOutput = allPossibleInorderPrivate(preorder, start+i+1, end);
			for (int i=0; i<leftOutput.size(); ++i) {
				for (int j=0; j<rightOutput.size(); ++j) {
					vector<int> current(leftOutput[i].begin(), leftOutput[i].end());
					current.push_back(preorder[start]);
					current.insert(current.end(), rightOutput[j].begin(), rightOutput[j].end());
					output.push_back(current);
				}
			}
		}
		return output;
	}

public:
	static vector<vector<int> > allPossibleInorder(vector<int> preorder) {
		return allPossibleInorderPrivate(preorder, 0, preorder.size()-1);
	}
};

int main() {
	int preor[] = {1,2,3};
	vector<int> preorder(preor, preor+sizeof(preor)/sizeof(int));
	vector<vector<int> > output = TreeUtils::allPossibleInorder(preorder);
	system("pause");
}*/