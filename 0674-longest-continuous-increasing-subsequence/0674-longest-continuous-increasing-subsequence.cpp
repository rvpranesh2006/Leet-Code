class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

     if(nums.empty())
        return 0;

        int current = 1;
        int maximum = 1;
        for(int i = 1; i < nums.size();i++)
       {
        if(nums[i] > nums[i -1])
        {
            current ++;
        }
        else
        {
            current = 1;

        }
        maximum = max(maximum,current);
       }
       return maximum;

    }
};