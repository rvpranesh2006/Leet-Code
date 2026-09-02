class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> position(26);
        for(int i =0; i  < order.size();i++)
        {
            position[order[i] - 'a'] = i;
        }
        for(int i =0; i < words.size() - 1;i++)
        {
            string first = words[i];
            string second = words[i + 1];
            int len = min(first.size(),second.size());
            bool different = false;
            for(int j = 0; j < len; j++)
            {
                if(first[j] != second[j])
                {
                if(position[first[j] - 'a'] > 
                position[second[j]-'a'])
                {
                    return false;
                }
                different = true;
                break;
            }
        }
        if(!different && first.size() > second.size())
        {
            return false;
        }
        }
        return true;
    
    }
};