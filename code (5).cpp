class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int n= s.size();
        int longest=0;
        int curr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    curr= i-st.top();
        
                    longest=max(longest,curr);
                }
            }
        }
        return longest;
    }
};