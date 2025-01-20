class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int len_s=s.size();
        int len_p=p.size();
        if(len_p >len_s)
        return result;

        unordered_map<char,int> freq_p,freq_window;
        for(char c: p)
        {
            freq_p[c]++;
        }
        for(int i=0;i< len_p;i++)
        {
            freq_window[s[i]]++;
        }
        if(freq_window==freq_p)
        {
            result.push_back(0);
        }
        for(int i=len_p;i<len_s;i++)
        {
            freq_window[s[i]]++;
            
            char start_char=s[i-len_p];
            freq_window[start_char]--;
            if(freq_window[start_char]==0)
            {
                freq_window.erase(start_char);
            }
            if(freq_window==freq_p)
            {
                result.push_back(i-len_p+1);
            }
        }
        return result;
    }
};