class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0;
        int minsalary = salary[0];
        int maxsalary = salary[0];
        for(int i =0; i < salary.size();i++)
        {
            sum += salary[i];
            if(salary[i] < minsalary)
            {
                minsalary = salary[i];
            }
            if(salary[i] > maxsalary)
            {
                maxsalary = salary[i];
            }

        }
        sum = sum - minsalary - maxsalary;
        return (double) sum / (salary.size() - 2);
    }
};