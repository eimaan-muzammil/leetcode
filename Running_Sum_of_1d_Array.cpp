 vector<int> runningSum(vector<int>& nums) {
         std::vector<int> result;
    int runningSum = 0;

    for (int num : nums) {
        runningSum += num;
        result.push_back(runningSum);
    }

    return result;
}
