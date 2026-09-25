class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> arr;
        for(int i = 0; i < m; i++)
        {
        for(int j = 0; j < n; j++)
        {
        arr.push_back(grid[i][j]);
        }
        }
        k = k % arr.size();
        for(int t = 0; t < k;t++)
        {
            int last = arr.back();
            arr.pop_back();
            arr.insert(arr.begin(),last);
        }
        int index =0;
        for(int i = 0;i < m; i++)
        {
        for(int j = 0;j < n;j++)
        {
            grid[i][j] = arr[index];
            index++;
        }
        }
        return grid;
            }
};