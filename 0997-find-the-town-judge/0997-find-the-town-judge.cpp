class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n+1,0);
        vector<int> outdegree(n +1,0);
        for(int i = 0; i < trust.size();i++)
        {
            int person = trust[i][0];
            int trusted = trust[i][1];
            outdegree[person]++;
            indegree[trusted]++;

        }
        for(int person = 1; person <=n; person++)
        {
            if(indegree[person] == n -1 && outdegree[person] == 0)
            {
                return person;
            }
            
        }
        return -1;
    }
};