// 快速排序就是每次找一个基准点(这里选最右边的元素)
// 将小于该基准点的元素都放到其左边
// 将大于该基准点的元素都放到其右边
// 然后将剩下的两个子区间(左边和右边的)都按上述方法进行排序

// 下面代码在leetcode912上测试了
class Solution {
public:
    int partition(vector<int> &nums, int p, int q){
        // 确定 p正确位置 并返回
        while(p<q){
            while(p<q && nums[q] >= nums[p]) q--;
            swap(nums[p], nums[q]);
            while(p<q && nums[p] <= nums[q]) p++;
            swap(nums[p], nums[q]);
        }
        return p;
    }
    void quick_sort(vector<int> &nums, int p, int q){
        if(p>=q) return;
        int pivot = partition(nums, p, q);
        quick_sort(nums, p, pivot-1);
        quick_sort(nums, pivot+1, q);
        
    }
    vector<int> sortArray(vector<int>& nums) {
        // 快速排序  从小到大
        quick_sort(nums, 0, nums.size()-1);
        return nums;
    }
};