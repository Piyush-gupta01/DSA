class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int rightsum;
        int totalsum = 0;
        for(int i=0; i<=nums.size()-1; i++){
            totalsum += nums[i];
        }
        for(int i=0; i<=nums.size()-1; i++){
            rightsum = totalsum - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};