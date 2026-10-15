class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum=1;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                sum*=nums[i];
            }else{
                zero++;
            }
        }

        if(zero>1){
            return vector<int>(nums.size(),0);
        }

        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(zero>0){
                ans[i]=(nums[i]==0)?sum:0;
            }else{
                ans[i]=sum/nums[i];
            }
        }
        return ans;
    }
};
