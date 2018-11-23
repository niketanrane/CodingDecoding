class Solution {
public:
    int minAddToMakeValid(string S) {
        int len = S.size(), ans = 0;
        stack < char > st;
        for(int i = 0; i < len; i++){
            if (S[i] == '('){
                st.push(S[i]);
            }
            else{
                if(st.empty()){
                    ans++;
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            ans++;
            st.pop();
        }
        return ans;
    }
};