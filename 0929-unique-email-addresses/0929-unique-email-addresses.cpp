class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;
        for(string email : emails)
        {
            int at = email.find('@');
            string local = email.substr(0,at);
            string domain = email.substr(at+1);
            string newlocal = "";
            for(char c : local)
            {
                if(c == '+')
                {
                    break;
                }
                if(c == '.')
                {
                    continue;
                }
                newlocal += c;
            }
            string finalemail = newlocal + "@" + domain;
            uniqueEmails.insert(finalemail);
        }
        return uniqueEmails.size();
    }
};