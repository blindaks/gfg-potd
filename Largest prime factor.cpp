class Solution{
public: 
    long long int largestPrimeFactor(int N){
        int i = 2;
        int ans = 1;
        while(N>1)
        {
            if(N%i==0)
            {
                ans = i;
                N /= i;
            }
            else i++;
        }
        return ans;
        // code here
    }
};
