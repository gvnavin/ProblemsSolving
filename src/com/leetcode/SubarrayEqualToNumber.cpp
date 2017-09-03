/*
#include <iostream>
 
using namespace std;
 
bool find_sub_range(int A[], int len, int sum, int&start, int&end)
{
	start = -1;
	end = -1;
	int left = 0;
	int right = 0;

	int currentSum = A[0];
	while ((left < len) && (right < len)) {
		if (currentSum == sum) {
			start = left;
			end = right;
			return true;
		}
		if (currentSum < sum) {
			++right;
			currentSum += A[right];
		}
		if (currentSum > sum) {
			while ((currentSum > sum) && (left < right)) {
				currentSum -= A[left];
				++left;
			}
			if (currentSum > sum) {
				left = right = right + 1;
				currentSum = A[right];
			}
		}
	}
	return false;
}

int main()
{
  int A[] = {3, 2, 7, 1, 5, 4};
 
  int start, end;
 
  bool found = find_sub_range(A, 6, 8, start, end);
 
  cout << "found = " << found << endl;
 
  if (found){
    cout << "start = " << start << ",  end = " << end << endl;
  }
 
  return 0;
}*/