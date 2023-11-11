class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        map<char,char>mp1;
        map<char,char>mp2;
        if(str1.length()!=str2.length())
        return 0;
        for(int i=0;i<str1.length();i++)
        {
            if(mp1.find(str1[i])!=mp1.end() && mp2.find(str2[i])!=mp2.end())
            {
                if(mp1[str1[i]]!=str2[i] || mp2[str2[i]]!=str1[i])
                return 0;
            }
            else if(mp1.find(str1[i])!=mp1.end() || mp2.find(str2[i])!=mp2.end())
            return false;
            else
            {
                mp1[str1[i]]=str2[i];
                mp2[str2[i]]=str1[i];
            }
        }
        return true;
    }
};
