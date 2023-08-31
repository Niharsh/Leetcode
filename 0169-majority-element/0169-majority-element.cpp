class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int m=0,r=0;
        for(auto x:mpp){
            if(x.second > m){
                m=x.second;
                r=x.first;
            }
        }
        return r;
    }
};