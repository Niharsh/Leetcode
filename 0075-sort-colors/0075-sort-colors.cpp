class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        switch(nums[mid]){
            case 0:
                swap(nums[left++],nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[high--]);
                break;
        }
    }

    }
};