class Solution {
public:
    int digits_sum(int num)
    {
        int digit = 0;
        while(num>0)
        {
            digit += (num%10)*(num%10);
            num = num/10;
        }
        return digit;
    }

    bool isHappy(int n) {
        int sum = n;
        
        while(sum!=1){
            sum = digits_sum(sum);
            if(sum == 1) 
              return true;
            else if(sum == 4) 
              return false;
        }
        return true;
    }
};
