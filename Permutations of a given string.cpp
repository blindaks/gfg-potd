class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    int l=S.length();
		    vector<string>v;
		    vector<char>s;
		    for(int i=0;i<l;i++)
		    {
		        s.push_back(S[i]);
		    }
		    sort(s.begin(),s.end());
		    do
		    {
		        string x;
		        for(int i=0;i<l;i++)
		        x+=s[i];
		        v.push_back(x);
		    }while(next_permutation(s.begin(),s.end()));
		    return v;
		    // Code here there
		}
};
