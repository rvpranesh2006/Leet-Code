class Solution {
public:
    int jump(vector<int>& nums) {
     int jumps = 0;
     int currentend = 0;
     int farest = 0;
     for(int i =0; i < nums.size() - 1 ;i++)
     {
        farest = max(farest,i + nums[i]);
        if(i == currentend)
        {
            jumps++;
            currentend = farest;
      }
     }
     return jumps;
    }
};