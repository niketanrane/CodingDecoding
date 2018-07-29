#include<stdio.h>
//niketanrane

int main()
{
    int n, m, temp, ans = -1;

    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        if(temp == m){
            ans = i+1;
        }
    }
    printf("%d\n", ans);
    return 0;
}
