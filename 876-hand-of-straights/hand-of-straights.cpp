class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        if(hand.size()%groupSize!=0) return false;

        unordered_map<int,int> count;
        for(int card:hand)
        {
            count[card]++;
        }     

        priority_queue<int,vector<int>,greater<int>> minH;  
        for(auto &p:count)
        {
            minH.push(p.first);
        } 

        while(!minH.empty())
        {
            int first = minH.top();

            for(int i=first; i< first+groupSize ; i++)
            {
                if(count.find(i) == count.end()) return false;
                count[i]--;

                if(count[i]==0)
                {
                    if(i !=minH.top()) return false;
                    minH.pop();
                }
            }
        }
        return true;
    }
};