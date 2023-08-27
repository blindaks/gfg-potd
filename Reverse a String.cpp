class Solution
{
    public:
    string reverseWord(string str)
    {
        string t="";
        for(int i=str.length()-1;i>=0;i--)
        t+=str[i];
        return t;
        // Your code goes here
    }
};
