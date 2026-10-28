class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num = 1;
        for(int i = 0; i < arr.size();i++)
        {
            while(num < arr[i])
            {
                k--;
                if(k == 0)
                {
                return num;
            }
            num ++;
            }
            num ++;
        }
        return num + k - 1;
    }
};