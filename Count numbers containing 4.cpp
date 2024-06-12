class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int ans = 0;
        while(n!=0)
        {
            int x = n;
            while(x!=0)
            {
                if((x % 10) == 4)
                {
                    ans++;
                    break;
                }
                
                x/=10;
            }
            n--;
        }
        return ans;
    }
};
