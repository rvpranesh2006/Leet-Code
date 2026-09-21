class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int ,int>freq;
        for(int num :arr)
        {
            freq[num]++;

        }
        set<int>unique;
        for(auto p : freq)
        {
            unique.insert(p.second);
        }
        return unique.size() == freq.size();
        
    }
};