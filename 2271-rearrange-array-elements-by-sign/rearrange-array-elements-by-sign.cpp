class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> nums1(nums.size());
        int index = 0;
        int bindex = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                nums1[index]=nums[i];
                index += 2;
            }else{
                nums1[bindex]=nums[i];
                bindex += 2;
            }
        }
        return nums1;
    }
};