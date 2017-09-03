class Solution {
public:
    int getMax(int A[], int n, int tar) {
        int min = 0;
        int max = n-1;
        int x = -1;
        while(min<=max){
            int mid = min + (max-min)/2;
            if(A[mid]<=tar){
                x = mid;
                min = mid+1;
            }else {
                max = mid -1;
            }
        }
        if(A[x] == tar) return x;
        return -1;
    }

    int getMin(int A[], int n ,int tar) {
        int min = 0;
        int max = n-1;
        int x = -1;
        while(min<=max){
            int mid = min + (max-min)/2;
            if(A[mid]>=tar){
                x = mid;
                max = mid -1;
            }else {
                min = mid+1;
            }
        }
        if(A[x] == tar) return x;
        return -1;
    }

    vector<int> searchRange(int A[], int n, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ans(2);
        ans[0] = ans[1] = -1;
        if(!n) return ans ;
        int min = getMin(A,n,tar);
        int max = getMax(A,n,tar);
        ans[0] = min;
        ans[1] = max;
        return ans;
    }
};