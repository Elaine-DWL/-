// 快速排序就是每次找一个基准点(这里选最右边的元素)
// 将小于该基准点的元素都放到其左边
// 将大于该基准点的元素都放到其右边
// 然后将剩下的两个子区间(左边和右边的)都按上述方法进行排序

// 下面代码在leetcode215上测试了
class Solution {
public:
    int partition(vector<int> &nums, int p, int q){//以nums[q]为标准   将小于它的放左边  大于它的放右边
        while(p<q){
            while(p<q && nums[p] <= nums[q]) p++;
            swap(nums[p], nums[q]);
            while(p<q && nums[q] >= nums[p]) q--;
            swap(nums[p], nums[q]);   
        }
        return p;// 返回已经确定的nums[q]的下标  因为上面while循环结束时p==q 这里返回p,q都可以 
    }
    int quick_sort(vector<int> &nums, int p, int q){
        if(p>=q) return 0;// 这里的返回值没有意义  我只是想让递归终止
        int ipovt = partition(nums, p, q);
        quick_sort(nums, p, ipovt-1);
        quick_sort(nums, ipovt+1,  q);
        return 1;
    }
    int findKthLargest(vector<int>& nums, int k) {
        quick_sort(nums, 0, nums.size()-1);
        for(int x:nums) cout<<x<<" ";
        cout<<endl;
        return -1;
    }
};