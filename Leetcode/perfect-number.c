class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1){
            return false;
        }
        int div = 2;
        int ans = 1;
        int n = num;
        int q = sqrt(num);
        while(div <= q){
            if(num % div == 0){
                ans += div;
                if(div != (num/div)){
                    ans += (num/div);
                }
                //printf("%d ", div);
            }
            div++;
        }
        //printf("%d ", ans);
        return (num == ans);
    }
};
