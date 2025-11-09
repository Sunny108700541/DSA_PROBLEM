
//Maximum Product Subarray in an Array
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int prefix=1;
        int suffix=1;
        int n=nums.size();
        int max_prod=0;
        for(int i=0;i<nums.size();i++){
            if(prefix==0)prefix=1;
            if(suffix==0)suffix=1;
            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            max_prod=max(max_prod,max(suffix,prefix));
            
        }

        return max_prod;
        
    }
};