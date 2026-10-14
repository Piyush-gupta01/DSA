class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; // pointing towards the valid integer of nums1
        int j = n - 1; // pointing towards the last index of the nums2
        int idx = m + n - 1; // pointing towards the last index of nums1

        while(i>=0 && j>=0){
            if(nums1[i] >= nums2[j]){
                nums1[idx] = nums1[i];
                idx--;
                i--;
            }else{
                nums1[idx] = nums2[j];
                j--;
                idx--;
            }
        }
        while(j >= 0){
            nums1[idx] = nums2[j];
            idx--;
            j--;
        }
    }
};