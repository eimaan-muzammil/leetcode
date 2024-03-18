class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int a=0;
        int b=nums.size();
        int c;
        if(target>nums[b-1]){
            return b;
        }
        while(a<=b){
              c=(a+b)/2;
            if(nums[c]==target){  
                return c;
            }
          
            if(target<nums[c]){     
            b=c-1;    
            }else{
            a=c+1;        
            }
          
        }
         return  a;   
    }
};
