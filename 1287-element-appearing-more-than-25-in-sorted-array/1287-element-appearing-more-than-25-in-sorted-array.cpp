class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count = 1;
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] == arr[i -1]){
                count ++;
            }
            else
            {
                count = 1;
            }
            if(count  * 4 > arr.size())
            {
                return arr[i];
            }
        }
        return arr[0];
    }
};