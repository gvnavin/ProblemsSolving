struct node {
    int pos;
    int h;
};

class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ans =0;
        height.push_back(-1);
        node temp; temp.pos = 0; temp.h=0;
        stack<node> stk;
        stk.push(temp);
        
        for(int i =0; i <height.size() ;i++) {
            node newNode ;
            newNode.h = height[i];
            newNode.pos = i;
            if(height[i] >= stk.top().h){
                stk.push(newNode);
            } else {
                while(stk.size() && stk.top().h > newNode.h) {
                    node tmp = stk.top();
                    stk.pop();
                    newNode.pos = tmp.pos;
                    ans = max(ans,tmp.h*(i-tmp.pos));
                    
                }
                stk.push(newNode);
            }   
        }
        return ans;
    }
};