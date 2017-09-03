class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector< vector<char> > arr;
        vector<char> node(3);
        node[0] = node[1] = node[2] = 0;
        arr.push_back(node);
        arr.push_back(node);
        node[0] = 'a'; node[1] = 'b'; node[2] = 'c';
        arr.push_back(node);
        node[0] = 'd'; node[1] = 'e'; node[2] = 'f';
        arr.push_back(node);
        node[0] = 'g'; node[1] = 'h'; node[2] = 'i';
        arr.push_back(node);
        node[0] = 'j'; node[1] = 'k'; node[2] = 'l';
        arr.push_back(node);
        node[0] = 'm'; node[1] = 'n'; node[2] = 'o';
        arr.push_back(node);
        node[0] = 'p'; node[1] = 'q'; node[2] = 'r';node.push_back('s');
        arr.push_back(node);
        node.pop_back();
        node[0] = 't'; node[1] = 'u'; node[2] = 'v';
        arr.push_back(node);
        node[0] = 'w'; node[1] = 'x'; node[2] = 'y';node.push_back('z');
        arr.push_back(node);
        string str;
        vector<string> ans;
        func(arr,digits,str,0,digits.length(),ans);
        return ans;

    }

    void func(vector< vector<char> >& arr,string org,string str,int s,int e,vector<string>& ans){
        if(s==e){
            ans.push_back(str);
            return ;
        }

            int size =  arr[org[s]-48].size();
             for(int k = 0; k < size ; k ++) {
                 func(arr,org,str+arr[org[s]-48][k],s+1,e,ans);
             }

    }
};
