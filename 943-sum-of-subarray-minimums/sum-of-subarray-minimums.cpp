class Solution {
    vector<int> findNSE(vector<int> &arr)
    {
        int n=arr.size();
        vector<int> nse(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            nse[i]=st.empty() ? n:st.top();
            st.push(i);
        }
        return nse;
    }
    vector<int> findPSE(vector<int> &arr)
    {
        int n=arr.size();
        vector<int> pse(n);
        stack<int> st;
        for(int i=0;i<arr.size();i++)
        {
            while(!st.empty() && arr[st.top()]> arr[i])
            {
                st.pop();
            }
            pse[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return pse;
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> pse=findPSE(arr);
        vector<int> nse=findNSE(arr);
        long long total=0;
        int mod =(int)(1e9+7);
        for(int i=0;i<arr.size();i++)
        {
            int left=i-pse[i];
            int right=nse[i]-i;
            total=(total+(right*left*1LL*arr[i])%mod)% mod;
        }
        return total;
    }
};