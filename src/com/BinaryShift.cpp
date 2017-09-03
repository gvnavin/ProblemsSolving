#include <iostream>
using namespace std;

class Solution {
public:
	void bitTest() {

		unsigned int num = 1;
		for (int i=0; i<=32; ++i) {
			cout << (num << i) << endl;
		}
		system("pause");
	}
};

int main() {
	Solution().bitTest();
}