class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = 0;
        int actual = 0;
        int expected = nums.size()*(nums.size()+1)/2;  
        for(int i=0; i<=nums.size()-1; i++){
            actual += nums[i];
        }
        missing = expected - actual;
        return missing;
    }
};