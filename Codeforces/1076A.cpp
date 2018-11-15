#include<iostream>
#include<strings.h>
using namespace std;


char s[1000009], t[1000009];

int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s", s);
    if(strlen(s) == 1){
        printf("%s\n", s);
        return 0;
    }
    int l = strlen(s), j = 0;
    for(int i = 0; i < l-1; i++){
        if (s[i] > s[i+1]){
            for(int k = i+1; k < l; k++){
                t[j++] = s[k];
            }
            break;
        }
        t[j++] = s[i];
    }
    printf("%s\n", t);

    return 0;
}
