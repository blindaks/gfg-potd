class Solution
{
  public:
    string reverseEqn (string s)
        {
            string ans="";
            string num="";
            int l=s.length();
            for(int i=0;i<l;i++)
            {
                if(s[i]>='0' && s[i]<='9')
                {
                    num+=s[i];
                }
                else
                {
                ans=num+ans;
                ans=s[i]+ans;
                num="";
                }
            }
            return num+ans;
            //code here.
        }
};
