class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> required(26,0);
        for(char c: licensePlate)
        {
            if(isalpha(c))
            {
                c = tolower(c);
                required[c - 'a']++;
            }
        }
          string answer =  "";
        for(string word : words)
        {
            vector<int> count(26,0);
            for(char c : word)
            {
                count[c - 'a']++;
            }
            bool complete = true;
            for(int i = 0; i < 26; i++)
            {
                if(count[i] < required[i])
                {
                    complete = false;
                    break;
                }
            }
            if(complete)
            {
                if(answer == "" ||word.length() < answer.length())
                {
                    answer = word;
                }
            }
        }
        return answer;
    }
};