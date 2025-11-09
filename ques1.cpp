#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        
        int xor_val=0;
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            xor_val=xor_val^nums[i];

            if(xor_val==k){
                count++;

            }

            if(mp.find(xor_val^k)!=mp.end()){
                count+=mp[xor_val^k];
            }

            mp[xor_val]++;
        }
        return count;
    }
};