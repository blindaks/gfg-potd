//User function Template for C++

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        sort(arr.begin(),arr.end());
        vector<vector<int>>v;
        do {
            v.push_back(arr);
        }while(next_permutation(arr.begin(),arr.end()));
        return v;
    }
};
