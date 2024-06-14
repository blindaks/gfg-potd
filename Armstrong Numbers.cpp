// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int t = n;
        int sum = 0;
        while(n != 0)
        {
            int d = n % 10;
            sum+=(d*d*d);
            n = n / 10;
        }
        if(sum == t)
        return "true";
        return "false";
    }
};
