class Solution {
    static int leastInterval(int n, int k, char tasks[]) {
        int max = -1, extra = 0;
        int count[] = new int[26];
        for(int i=0; i<n; i++)
        count[tasks[i]-'A']++;


        for(int i=0; i<26; i++)
        {
            if(count[i] == max)
            extra++;
            else if(count[i] > max)
            {
                max = count[i];
                extra = 0;
            }
        }
        int ans = Math.max(n, max+ (max-1)*k+ extra);
        return ans;
        // code here
    }
}
