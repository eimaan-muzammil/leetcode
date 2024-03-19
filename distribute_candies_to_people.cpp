class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
         vector <int> array;
        int x = 0;
        int count = 1;
        for(int i=0; i<num_people; i++){
            array.push_back(0);
        }
        while(candies>0){
            if(count>candies){
                array[x]+= candies;
            }
            else{
                array[x] += count;
            }
            candies = candies - count;
            if(x==num_people-1){
                x=0;
            }
            else{
                x++;
            }
            count++;
        }
        return array;
    }
};
