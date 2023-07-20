class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        map<char,int>mp;
        int l=S.length();
        for(int i=0;i<l;i++)
        {
            mp[S[i]]++;
        }
        for(int i=0;i<l;i++)
        {
            if(mp[S[i]]==1)
            {
                return S[i];
            }
        }
        return '$';
       //Your code here
       
    }

};
