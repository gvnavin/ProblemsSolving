/*
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        
		if (path.size() == 1) return path;

		int writeIndex = 1;
		char previousChar = path[0];
		for (int i=1; i<path.size(); ++i) {
			char currentChar = path[i];
			if ((previousChar == '/' && currentChar == '/')) {
			} else {
				if (currentChar == '.') {
					char nextChar = ' ';
					if (previousChar == '/' && i+1 < path.size() && (nextChar = path[i+1]) == '.') {
						int j = writeIndex-2;
						while (j>=0 && path[j] != '/') {
							--j;
						}
						writeIndex = max(j,0);
						i += 1;
					} else if (previousChar == '/') {
						writeIndex -= 1;
					} else {
						path[writeIndex] = path[i];
						writeIndex += 1;
					}
				}
				else {
					path[writeIndex] = path[i];
					writeIndex += 1;
				}
			}
			previousChar = currentChar;
		}
		if (writeIndex == 0) return "/";
		if (path[writeIndex-1] == '/' && writeIndex != 1) return path.substr(0,writeIndex-1);
		return path.substr(0,writeIndex);
    }
};

int main() {
	string input = "/a/b.c/../d..e/c";
	cout << Solution().simplifyPath(input);
	system("pause");
}*/