class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        int n = nums.size();
        for(int i=0; i<=n-1; i++){
            if(target == nums[i]){
                return i;
            }else if(nums[i] > target){
                return i;
            }
        }
        return n;
    }
};