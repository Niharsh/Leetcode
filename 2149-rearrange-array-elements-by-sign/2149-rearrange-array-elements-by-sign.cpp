class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> narray;
        vector<int> parray;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                narray.push_back(nums[i]);
            }
            else{
                parray.push_back(nums[i]);
            }
        }
        for(int i=0;i<(n/2);i++){
            nums[2*i]=parray[i];
            nums[2*i+1]=narray[i];
        }
        return nums;
    }
};