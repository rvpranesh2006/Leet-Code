class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
       vector<bool>answer;
       int num = 0;

       for(int i = 0; i < nums.size();i++)
        {
            num = (num * 2 + nums[i] )%5;
            if( num == 0)
            {
                answer.push_back(true);
            }
            else
            {
                answer.push_back(false);
            }
        }
        return answer;
    }
};