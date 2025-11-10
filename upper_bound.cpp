class Solution{
public:
    int upperBound(vector<int> &nums, int x){

     int left=0;
        int right=nums.size()-1;
       
        int ans=-1;
        while(left<=right){
            int mid=left+(right-left)/2;

            if(nums[mid]>x){
                right=mid-1;
                ans=mid;
            }
            
            else{
               left=mid+1;
            }
        }
        return ans;
        

        
    }
};