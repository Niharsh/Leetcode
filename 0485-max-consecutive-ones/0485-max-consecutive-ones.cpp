class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                mx++;
            }
            else{
                mx=0;
            }
            ans = max(mx,ans);
        }
        return ans;
    }
};