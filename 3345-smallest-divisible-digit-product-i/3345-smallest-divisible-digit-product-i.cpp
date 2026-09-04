class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int prod=1;
            int temp=n;
            while(temp){
            int dig=temp%10;
            prod*=dig;
            temp/=10;
        }
            if(prod%t==0){
                return n;
            }
            n++;
        }
    }
};