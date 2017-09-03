class Solution {
public:
    int search(int A[], int n, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!n) return -1;
        int low = 0;
        int high = n-1;
        while(low <=high ){
            int mid = low + (high -low)/2;
            if(A[mid]==tar) return mid;
            else if(A[mid] > tar){
                    if(A[high] >= A[mid] || A[high] <  tar )
                        high = mid -1;
                    else 
                        low = mid +1;
            }else {
                    if(A[mid]>=A[low] || A[low] > tar)
                        low = mid+1;
                    else 
                        high = mid -1;
            }
        }
        
        return -1;
    }
};