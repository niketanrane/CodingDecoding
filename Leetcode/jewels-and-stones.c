class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char, int>mp;
        int len = S.length();
        //printf("len = %d", len);
        for(int i = 0; i < len; i++){
            mp[S[i]]++;
        }
        int ans = 0;
        int len2 = J.length();
        for(int i = 0; i < len2; i++){
            ans += mp[J[i]];
        }

        return ans;
    }
};
