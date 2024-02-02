//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int x=0;
        int neg=1;
        for(int i=0;i<s.length();i++)
        {
            if(i==0 && s[i]=='-')
            neg=-1;
            else if(s[i]>=48 && s[i]<=57)
            {
                x=x*10+(s[i]-'0');
            }
            else
            return -1;
        }
        return x*neg;
    }
};
