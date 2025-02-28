class Solution {
public:
   
    void sortColors(vector<int>& nums) 
    {
       quicksort(nums,0,nums.size()-1); 
    }
    private:

    void quicksort(vector<int>& nums,int p,int r)
    {
        if(p<r)
        {
            int q=partition(nums,p,r);
            quicksort(nums,p,q-1);
            quicksort(nums,q+1,r);
        }
    }

    int partition(vector<int> &nums,int p,int r)
    {
        int x=nums[r];
        int i=p-1;
        for(int j=p;j < r;j++)
        {
            if(nums[j]<=x)
           {
            i++;
            swap(nums[i],nums[j]);
           }
        }
        swap(nums[i+1],nums[r]);
        return i+1;
    }

    void swap(int &a ,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
};