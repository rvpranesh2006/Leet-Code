class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum =0;
        int closest = nums[0] + nums[1]+nums[2];

        int mindiff = abs(closest - target);
        int diff;
        sort(nums.begin(),nums.end());
         for(int i = 0; i < nums.size()- 2;i++)
         {
            for(int j = i  + 1; j < nums.size() - 1;j++)
            {
                for(int k =j + 1; k < nums.size(); k ++)
                {
                    sum = nums[i] + nums[j] + nums[k];
                    diff = abs(sum - target);
                    if(diff < mindiff)
                    {
                        closest = sum;
                        mindiff =  diff;
                    }
                    if(diff == 0)
                    {
                        return sum;
                    }
                 
                }
            }
            
         }
        return closest;
    }
};