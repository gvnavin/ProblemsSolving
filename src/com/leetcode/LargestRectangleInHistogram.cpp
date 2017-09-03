/*
#include <vector>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        
		if (height.empty()) return 0;

		int n = height.size();

		int largestArea = 0;
		int* left = new int[height.size()];
		int* right = new int[height.size()];
		
		left[0] = 0;
		right[n-1] = 0;
		for (int i=1; i< n; i++) {
			
			int j = i-1;
			left[i] = 0;
			while (j>= 0 && height[i] <= height[j]) {
				left[i] += left[j] + 1;
				j -= (left[j]+1);
			}

			j = n-i;
			right[n-i-1] = 0;
			while (j < n && height[n-i-1] <= height[j]) {
				right[n-i-1] += right[j] + 1;
				j += (right[j]+1);
			}
		}
		for (int i=0; i<n; i++) {
			int area = (left[i] + right[i] + 1) * height[i];
			largestArea = max(area,largestArea);
		}
		delete[] left;
		delete[] right;
		return largestArea;
    }
};

#include <iostream>
int main() {
	int height[] = {4,7,6,8,5,9,1,0};
	vector<int> heightVec(height, height + sizeof(height)/sizeof(height[0]));
	cout << Solution().largestRectangleArea(heightVec);
	system("pause");
}*/