#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;
vector<char> ans;
int main()
{
    char a[106];
    scanf("%s", &a);
    int len = strlen(a);
    for(int i = 0; i < len; i++){
        char c = tolower(a[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'){
            continue;
        }
        else{
            ans.push_back('.');
            ans.push_back(c);
        }
    }
    for(int i = 0; i < ans.size(); i++){
        printf("%c", ans[i]);
    }
    return 0;
}

