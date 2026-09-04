class Solution {
public:
    int maxProduct(int n) {
        int prod=1;
        int largest=0;
        int slargest=0;
        while(n){
            int dig=n%10;
            if(dig>=largest){
                slargest=largest;
                largest=dig;
            }else if(dig<largest && dig>slargest){
                slargest=dig;
            }
            prod=largest*slargest;
            n/=10;
        }
        return prod;
    }
};