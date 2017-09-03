class Solution {
public:
    int maxArea(vector<int> &height) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ans = 0;
        int st = 0;
        int end = height.size() -1;
        while(st < end) {
            int temp =  (end - st)* min(height[st],height[end]);
            if(temp > ans) {
                ans = temp;
            }
            
            if(height[st] > height[end]) {
                end--;
            }else if(height[st] < height[end]){
                st++;
            }else {
                st++;
                end--;
            }
        }
        return ans;
    }
};