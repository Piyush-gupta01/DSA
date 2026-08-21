class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        vector<int> ans;
        int n = nums.size();

        for(int i=0;i<n;i++){
          if(nums[i]>0){
            nums1.push_back(nums[i]);
          }
        }
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums2.push_back(nums[i]);
            }
        }
        int index=0;
        int bindex =0;
        for(int i=0; i<n;i++){
            if(i%2==0){
            ans.push_back(nums1[index]);
            index++;
            }
            if(i%2!=0){
            ans.push_back(nums2[bindex]);
            bindex++;
            }
        }

        return ans;
    }
};