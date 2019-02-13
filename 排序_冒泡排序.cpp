class Solution {
public:
    void paopao_sort(vector<int>& nums){
        // 小的往上浮
        // for(int i=nums.size()-1; i>0; i--){
        //     for(int j=i-1; j>=0; j--){
        //         if(nums[i]<nums[j]) swap(nums[i], nums[j]);
        //     }
        // }
        // 或者大的往下沉
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+i] > nums[j]) swap(nums[i], nums[j]);
            }
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        // nums是待排序的数组
        // insert_sort(nums);
        paopao_sort(nums);
        for(int num:nums){
            cout<<num<<" ";
        }
        return 1;
    }
};
