class Solution {
  public:
    int M = 1e9 + 7;
    int padovanSequence(int n) {
        // code here.
        long long t[n];
        t[0] = 1;
        t[1] = 1;
        t[2] = 1;
        for(int i = 3; i <= n; i++)
        t[i] = (t[i-2] + t[i-3]) % M;
        return t[n];
    }
};
