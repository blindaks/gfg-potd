//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    map<char,int>mp;
	    string s="";
	    for(char ch:str)
	    {
	        mp[ch]++;
	        if(mp[ch]==1)
	        s+=ch;
	    }
	    return s;
	}
};
