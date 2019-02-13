class Solution {
public:
    void select_sort(vector<int> &nums){
        // 选择排序是每次从剩下的里面找出最小的 和当前数进行交换
        for(int i=0; i<nums.size(); i++){
            int min_cur = nums[i];
            int pos = i;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]<min_cur){
                    min_cur = nums[j];
                    pos = j;
                }
            }
            swap(nums[i], nums[pos]);
        }
    }
    void insert_sort(vector<int> &nums){
        // 插入排序是每次将当前数 往已经排好序的数组里面
        for(int i=1; i<nums.size(); i++){
            int v = nums[i];
            int j;
            for(j=i-1; j>=0&&nums[j]>v; j--){// 注意这里循环的条件  将大于当前数的所有往后移
                nums[j+1] = nums[j];
            }
            nums[j+1] = v;      
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        // nums是待排序的数组
        // insert_sort(nums);
        select_sort(nums)
        for(int num:nums){
            cout<<num<<" ";
        }
        return 1;
    }
};
