class Solution {
  public:
    int sumOfNaturals(int n) {
        long long m=1000000007;
        return ((n%m*(n+1)))%m/2;
        // code here
    }
};
