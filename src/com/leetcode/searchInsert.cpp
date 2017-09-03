class Solution {
public:
    int searchInsert(int arr[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int min = 0;
        int max = n -1;
        while(min<=max){
            int mid = (min+max)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid] > target){
                if(mid-1<min || arr[mid-1]<target) return mid;
                else max = mid-1;
            }else {
                if(mid+1>max || arr[mid+1] > target) return mid+1;
                else min = mid+1;
            }
        }
        
    }
};