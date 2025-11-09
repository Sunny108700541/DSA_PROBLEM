#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLen(vector<int>& arr) {
        int target = 0;
        int curr_sum = 0;
        int max_len = 0;
        unordered_map<int, int> mp;

        for (int i = 0; i < arr.size(); i++) {
            curr_sum += arr[i];

            if (curr_sum == target) {
                max_len = i + 1; // subarray from 0 to i
            }

            if (mp.find(curr_sum) != mp.end()) {
                int len = i - mp[curr_sum];
                max_len = max(max_len, len);
            } else {
                mp[curr_sum] = i; // store first occurrence
            }
        }
        return max_len;
    }
};
