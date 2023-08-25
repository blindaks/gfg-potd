class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    string t="";
	    for(int i=S.length()-1;i>=0;i--)
	    t+=S[i];
	    if(t==S)
	    return true;
	    return false;
	    // Your code goes here
	}

};
