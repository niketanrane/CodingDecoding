class Solution {
public:
    bool judgeCircle(string moves) {
        int len = moves.length();
        map<char, int>mp;
        for(int i = 0; i < len; i++){
            mp[moves[i]]++;
        }
        if(mp['U'] == mp['D'] & mp['L'] == mp['R']){
            return true;
        }
        else{
            return false;
        }
        return false;
    }
};
