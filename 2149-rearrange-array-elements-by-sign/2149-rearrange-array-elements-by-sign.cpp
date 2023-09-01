class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,0);
        int pindex=0,nindex=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                result[pindex]=nums[i];
                pindex+=2;
            }
            else{
                result[nindex]=nums[i];
                nindex+=2;
            }
        }
        return result;
    }
};