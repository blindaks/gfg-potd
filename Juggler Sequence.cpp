class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long>v;
        v.push_back(n);
        while(n!=1)
        {
            if(n%2==0)
            {
                n=int(sqrt(n));
            }
            else
            {
                long double x=sqrt(n);
                n=(long long)(x*x*x);
            }
            v.push_back(n);
        }
        // v.push_back(1);
        return v;
    }
};
