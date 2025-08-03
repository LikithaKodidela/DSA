class Solution {
public:
    int findMax(vector<int> v)
    {
        int maxi=v[0];
        for(int i=1;i<v.size();i++)
        {
            maxi=max(maxi,v[i]);
        }
        return maxi;
    }
    long long calculateHours(vector<int> &v,int h)
    {
        long long  total=0;
        for(int i=0;i<v.size();i++)
        {
           total+=ceil((double)v[i]/(double)h);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& v, int h) {
        int low=1,high=findMax(v);
        int ans=INT_MAX;
        while(low<=high)
        {
              int mid=low+(high-low)/2;
            long long result=calculateHours(v,mid);
            if(result<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        
        return ans;
    }
};