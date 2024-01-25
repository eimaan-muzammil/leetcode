class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 ){
            return false;
        } 
        long long a =0;
        long long b= x;
        while (b!=0){
            int digit=b % 10;
            a =a*10+digit;
            b/=10;
        }
        return(a==x);
    }
};
