class Solution {
public:
    int count=0;
    void merge(vector<int> &nums,int low,int mid,int high){
        vector<int> ans;
        int i=low;
        int j=mid+1;
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                ans.emplace_back(nums[i]);
                i++;
            }
            else{
                ans.emplace_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            ans.emplace_back(nums[i]);
            i++;
        }
        while(j<=high){
            ans.emplace_back(nums[j]);
            j++;
        }
        for(int i=low;i<=high;i++)
        nums[i]=ans[i-low];
    }
    void Sort(vector<int> &nums,int low,int high){
        if(low==high) return;
        int mid=(low+high)/2;
        Sort(nums,low,mid);
        Sort(nums,mid+1,high);
        int i=low; int j=mid+1;
        while(j<=high){
            while(i<=mid && (double)nums[i]/2<=(double)nums[j]) i++;
            count+=mid-i+1;
            j++;
        }
        merge(nums,low,mid,high);
    }
    int reversePairs(vector<int>& nums) {
        Sort(nums,0,nums.size()-1);
        return count;
    }
};