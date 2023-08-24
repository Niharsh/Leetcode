class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        int j=0;
        int set_size=set.size();
        for(auto x:set){
            nums[j++]=x;
        }
        return set_size;
    }
};