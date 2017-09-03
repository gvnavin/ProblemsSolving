/*
#include <iostream>
using namespace std;

class SortUtils {
private:
	static int partition(int *nums, int start, int end) {
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

	static void print(int *nums, int start, int end) {
		for (int i=start; i<=end; ++i) {
			cout << nums[i] << " ";
		}
		cout << endl;
	}

	static void quicksort(int *nums, int start, int end) {
		if (start < end) {
			int pivot = partition(nums, start, end);
			quicksort(nums, start, pivot-1);
			quicksort(nums, pivot+1, end);
		}
	}

public:
	static void quicksort(int *nums, int n) {
		quicksort(nums, 0, n-1);
	}
};

int main() {
	int nums[] = {5,13,2,25,7,17,20,8,4};
	SortUtils::quicksort(nums,sizeof(nums)/sizeof(int));
	system("pause");
}*/