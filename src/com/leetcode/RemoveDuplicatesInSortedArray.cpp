class Solution {
public:
    int removeDuplicates(int arr[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n<=1) return n;
        int j = 0;
        for(int i =1; i<n;i++){
            if(arr[j]!=arr[i]){
                arr[++j] = arr[i];
            }
        }
        return j+1;
        
    }
};