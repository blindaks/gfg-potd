class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        vector<int> duplicates;
        for (auto pair : freq) {
            if (pair.second > 1) {
                duplicates.push_back(pair.first);
            }
        }
        // sort(duplicates.begin)
        vector<int> result;
        result.push_back(-1);
        if (duplicates.empty()) {
            return result;
        } else {
            return duplicates;
        }
    }
};
