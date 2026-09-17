class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(char i : s){
            if(i >= 'a' && i <= 'z'){
                st.push(i);
            }
            if(i >= '0' && i <= '9' && !st.empty()){
                st.pop();
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};