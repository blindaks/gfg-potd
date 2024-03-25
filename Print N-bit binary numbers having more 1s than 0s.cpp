//User function template for C++
class Solution{
public:	
	void solve(vector<string>& v, int n, string s)
    {
        if(n==0)
        {
            v.push_back(s);
            return;
        }
        solve(v, n-1, s+"0");
        solve(v, n-1, s+"1");
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string>v;
	    solve(v,n,"");
	    vector<string>ans;
	    for(auto it:v)
	    {
	        int z=0;int o=0;
	        int i;
	        for(i=0;i<n;i++)
	        {
	            if(it[i]=='0') z++;
	            else o++;
	            if(z>o)
	            break;
	        }
	        if(i==n)
	        ans.push_back(it);
	    }
	    sort(ans.begin(),ans.end(),greater<string>());
	    return ans;
	}
};
