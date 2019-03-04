class Solution{
public:
		void heap_sort(vector<int> &nums){
			// 大顶堆的构建
			int n = nums.size()-1;
			int l,r,f;
			int idx_max;
			for(int i=n; i>0;){// 构建大顶堆 从下往上
				if(i%2==0 && i!=0){// i是偶数 右儿子结点
					l = nums[i-1];
					r = nums[i];
					f = nums[(i-1)/2];
					idx_max = l>r?i-1:i;
					if(nums[idx_max] > f) swap(nums[idx_max], nums[(i-1)/2]);
					i = i-2;
				}
				else if(i%2==1){
					l = nums[i];
					f = nums[i/2];
					if(l>f) swap(nums[i], nums[i/2]);
					i--;
				}
			}
			cout<<"初始化大顶堆结果："<<endl;
			for(int num:nums)
				cout<<num<<" ";
			cout<<endl;
			
			for(int i=n; i>0; i--){// 确定nums[i]处的元素
				swap(nums[i], nums[0]);
				//大顶堆的调整 从上往下调整
				for(int j=0; 2*j+1<i;){
					l = nums[2*j+1];
					f = nums[j];
					if(2*j+2==i && l>f){
						swap(nums[j], nums[2*j+1]);
						j = 2*j+1;
					} 
					else if(2*j+2<i){
						r =  nums[2*j+2];
						idx_max = l>r?2*j+1:2*j+2;
						if(nums[idx_max] > f){
							swap(nums[idx_max], nums[j]);
							j = idx_max;
						}
						else break;
					}
					else break;
				}
			}
			cout<<"堆排序结果："<<endl;
			for(int num:nums) cout<<num<<" ";
			return;
		}
}