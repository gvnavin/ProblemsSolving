/*
#include <iostream>

using namespace std;

class HeapUtils {
public:
	static void buildMaxHeap(int *nums, int n) {
		int i = (n-2)/2;
		for (; i>=0; --i) {
			maxHeapify(nums, n, i);
		}
	}

	static void maxHeapify(int *nums, int heapSize, int index) {
		int largest = index;
		int L = largest*2 + 1;
		int R = largest*2 + 2;
		if (L < heapSize && nums[L] > nums[index]) {
			largest = L;
		}
		if (R < heapSize && nums[R] > nums[largest]) {
			largest = R;
		}
		if (largest != index) {
			swap(nums[index],nums[largest]);
			maxHeapify(nums, heapSize, largest);
		}
	}

	static void heapSort(int *nums, int n) {
		buildMaxHeap(nums,n);
		int heapSize = n;
		for (int i=n-1; i>=0; --i) {
			swap(nums[0],nums[i]);
			--heapSize;
			maxHeapify(nums,heapSize,0);
		}
	}
};

int main() {
	int nums[] = {5,13,2,25,7,17,20,8,4};
	HeapUtils::heapSort(nums,sizeof(nums)/sizeof(int));
	system("pause");
}*/