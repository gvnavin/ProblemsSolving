/*
#include <iostream>
using namespace std;

class Solution {
private:
	static void passingProbabilityPrivate(int questions, int numChoices, double probability, int numCorrect, int numAttempted, double &ans) {
		if ((numAttempted-numCorrect) > int(ceil(float(questions)/float(2)))) {
			return;
		}
		if (numAttempted == questions) {
			if (numCorrect == int(ceil(float(questions)/float(2)))) {
				ans += probability;
			}
			return;
		}

		double probCorrect = double(1)/double(numChoices);
		double probWrong = 1-probCorrect;
		passingProbabilityPrivate(questions, numChoices, probability*probCorrect, numCorrect+1, numAttempted+1, ans);
		passingProbabilityPrivate(questions, numChoices, probability*probWrong, numCorrect, numAttempted+1, ans);
	}
public:
	static double passingProbability(int questions, int numChoices) {
		double ans = 0;
		passingProbabilityPrivate(questions, numChoices, double(1), 0, 0, ans);
		return ans;
	}
};

int main() {
	double prob = Solution::passingProbability(10,4);
	system("pause");
}*/