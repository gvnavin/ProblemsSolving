#include <queue>
#include <iostream>
using namespace std;

/*
bool compare(const int &a, const int &b) {
	return a > b;
}*/

/*
class compare {
public:
	bool operator() (const int &a, const int &b) {
		return a > b;
	}
};

int main() {

	priority_queue<int,vector<int>,compare> pq;
	pq.push(10);
	pq.push(8);
	cout << pq.top();
	system("pause");
}*/

/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
	vector<int> leastK(const vector<int>& nums, int k) {
		vector<int> output;
		if (k == 0) {
			return output;
		}
		priority_queue<int> pq;
		for (int i=0; i<nums.size(); ++i) {
			if (pq.size() < k) {
				pq.push(nums[i]);
			} else {
				int current = nums[i];
				if (current < pq.top()) {
					pq.pop();
					pq.push(current);
				}
			}
		}
		while (!pq.empty()) {
			output.push_back(pq.top());
			pq.pop();
		}
		return output;
	}

	vector<int> leastKPartition(int nums[], int n, int k) {
		vector<int> output;
		if (k == 0) {
			return output;
		}
		if (n <= k) {
			output.insert(output.end(), nums, nums + n);
			return output;
		}

		int low = 0;
		int high = n-1;
		int K = k;
		while (true) {
			int p = partition(nums, low, high);
			if (p == k-1) break;
			if (k-1 < p) {
				high = p-1;
			} else {
				low = p+1;
				k = (k-1-p);
			}
		}
		output.insert(output.end(), nums, nums+K);
		return output;
	}

	void quickSort(int nums[], int n) {
		quickSort(nums, 0, n-1);
	}
	
	void quickSort(int nums[], int low, int high) {
		int p = partition(nums, low, high);
		if (p != -1) {
			quickSort(nums, low, p-1);
			quickSort(nums, p+1, high);
		}
	}

	int partition(int nums[], int start, int end) {
		int pivot = nums[end];
		int writeIndex = start-1;
		for (int i=start; i<end; ++i) {
			if (nums[i] <= pivot) {
				++writeIndex;
				swap(nums[writeIndex], nums[i]);
			}
		}
		swap(nums[writeIndex+1],nums[end]);
		//print(nums, start, end);
		return writeIndex+1;
	}

	void swap(int &a, int &b) {
		int temp = a;
		a = b;
		b = temp;
	}
};

int main() {
	int nums[] = {9,7,11,1,0,15,20};
	//Solution().quickSort(nums,sizeof(nums)/sizeof(int));
	vector<int> numsVec(nums, nums + sizeof(nums)/sizeof(int));
	int k = 5;
	vector<int> output = Solution().leastKPartition(nums, sizeof(nums)/sizeof(int), k);
	system("pause");
}*/