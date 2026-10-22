class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int buy=nums[i];
            for(int j=i+1;j<n;j++){
            int sell=nums[j]-buy;
            ans=max(sell,ans);
            }
        }
        return ans;
    }
};
