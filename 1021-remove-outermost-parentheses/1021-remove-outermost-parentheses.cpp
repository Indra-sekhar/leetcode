class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>ans;
        string str = "";
        for(char c : s){
            if(c == '('){
                if(!ans.empty()){
                    str += c;
                }
                ans.push(c);
            }
            else{
                ans.pop();
                if(!ans.empty()){
                    str += c;
                }
            }
        }
        return str;
    }
};