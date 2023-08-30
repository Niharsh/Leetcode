class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> result;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                     return result;
                }
            }
        }
        return {-1,-1};
    }
};