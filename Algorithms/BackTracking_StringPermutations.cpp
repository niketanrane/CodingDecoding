#include<iostream>
#include<map>
#include<vector>
#include<set>

using namespace std;
string S;
int len;
map<char, int> mp;
set <string> ms;

bool isLegalMove(int curLen, char curChar){
    if(curLen + 1 > len || (mp.find(curChar) == mp.end()) || mp[curChar] == 0){
        return false;
    }
    return true;
}

bool stringPermute(string curString, int totalLen){
    if(curString.size() == totalLen){
        ms.insert(curString);
        return true;
    }

    for(int i = 0; i < totalLen; i++){
        if(isLegalMove(curString.size(),S[i])){
            string newString = curString + S[i];
            mp[S[i]]--;
            stringPermute(newString, totalLen);
            mp[S[i]]++;

        }
    }
    return false;

}
int main(){

    cin >> S;
    len = S.size();
    for(int i = 0; i < len; i++){
        mp[S[i]]++;
    }
    string curString = "";
    stringPermute(curString, len);
    set <string>::iterator it;
    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}
