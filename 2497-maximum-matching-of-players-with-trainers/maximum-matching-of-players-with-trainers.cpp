class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(t.begin(), t.end());
        sort(p.begin(), p.end());

        int m = p.size();
        int n = t.size();
        
        int l =0, r= 0;
        while(l<n && r < m)
        {
            if(t[l]>=p[r])
            {
                r++;
            }
            l++;
        }
        return r;
        
    }
};