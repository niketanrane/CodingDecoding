#include<bits/stdc++.h>

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int len = words.size();
        vector<string> ans;
        set<char>st;
        set<char>st1 = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        set<char>st2 = {'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        set<char>st3 = {'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
        set<char>::iterator iter;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < words[i].size(); j++){
                st.insert(toupper(words[i][j]));
            }
            /*
            for(iter=st.begin(); iter!=st.end();++iter) {
                cout << *iter << endl;
            }
            */
            if(includes(st2.begin(), st2.end(), st.begin(), st.end()) | includes(st1.begin(), st1.end(), st.begin(), st.end()) | includes(st3.begin(), st3.end(), st.begin(), st.end())){
                //printf("YES ");
                ans.push_back(words[i]);
            }
            st.clear();
        }
        return ans;
    }
};
