class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int digitCount = 0;

            while(num > 0) {
                digitCount++;
                num = num / 10;
            }

            if(digitCount % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};