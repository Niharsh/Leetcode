class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=nums[i];
            int cnt=0;
            for(int j=0;j<n;j++){
                if(temp==nums[j]){cnt++;}
            }
            if(cnt<2)return nums[i];
        }
        return -1;
    }
};