class Solution {
public:
    void adjust(vector<int> &nums, int pos, int tail){// 对pos及其子树 进行调整  从上往下调整
        int idx = pos;
        if(2*pos+1 <= tail && nums[2*pos+1]>nums[idx]) idx = 2*pos+1;
        if(2*pos+2 <= tail && nums[2*pos+2]>nums[idx]) idx = 2*pos+2;
        if(idx != pos){
            swap(nums[idx], nums[pos]);
            adjust(nums, idx, tail);// 递归的方法，如果进行了交换 对叶子结点进行调整
        }
}
    vector<int> sortArray(vector<int>& nums) {
        // 初始化大顶堆
        int n = nums.size();
        for(int i=(n-1)/2; i>=0; i--) adjust(nums, i, n-1); // 从第一个非叶子结点 从下往上调整
        // 对大顶堆进行排序
        for(int i=n-1; i>=1; i--){
            swap(nums[0], nums[i]);
            adjust(nums, 0, i-1);
        }
        return nums; // 现在返回的数组就是 从小到大排序的
    }
};