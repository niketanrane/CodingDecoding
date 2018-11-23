class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int wordsSize = words.size();
        vector< string > ans;
        for(int i = 0; i < wordsSize; i++){
            if (isWordMatchPattern(words[i], pattern)){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
    
    bool isWordMatchPattern(string word, string pattern){
        map<char, char> mp, mw;
        int wordSize = word.size();
        //cout << word << " " << pattern << endl;
        //printf("checking for word %s with pattern %s\n", word, pattern);
        for(int i = 0; i < wordSize; i++){
            //printf("i = %d and ch is %c and pattern is %c\n", i, word[i], pattern[i]);
            bool b1 = mw.find(word[i]) != mw.end() && mw[word[i]] != pattern[i];
            bool b2 = mp.find(pattern[i]) != mp.end() && mp[pattern[i]] != word[i];
            if(b1 || b2){
                return false;
            }
            //printf("Continue\n");
            mw[word[i]] = pattern[i];
            mp[pattern[i]] = word[i];
        }
        return true;
    }
};