#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[2001] = {0};   // For values from -1000 to 1000
        bool seen[1001] = {0};  // Max frequency can't exceed 1000 (arr size)

        // Count frequencies
        for (int v : arr) {
            freq[v + 1000]++;
        }

        // Check uniqueness of frequencies
        for (int i = 0; i < 2001; i++) {
            if (freq[i] > 0) {
                if (seen[freq[i]]) return false;
                seen[freq[i]] = true;
            }
        }
        return true;
    }
};
