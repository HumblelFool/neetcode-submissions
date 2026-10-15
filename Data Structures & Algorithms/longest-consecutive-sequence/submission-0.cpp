class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int curr=nums[0];
        int ans=1;
       int count =1;
        for(int i=1;i<nums.size();i++){
             if (nums[i] == curr) continue;
            if(nums[i]==curr+1){
             count++;
            }else{
                count=1;
            }
            curr = nums[i];
            ans = max(ans, count);
        }
        return ans;
    }
};
