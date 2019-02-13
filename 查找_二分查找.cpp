int binary_find(vector<int> &nums, int target){ // 返回target所在的下标  没有就返回-1
	int p=0, q=nums.size()-1;
	while(p<=q){
		int mid = p+(q-p)/2;
		if(nums[mid] == target) return mid;
		else if(target < nums[mid]) q=mid-1;
		else p=mid+1;
	}
	return -1;//没找到
}