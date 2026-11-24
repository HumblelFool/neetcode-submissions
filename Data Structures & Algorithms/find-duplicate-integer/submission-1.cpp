class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>store;
        for(int i=0;i<nums.size();i++){
            if(store.find(nums[i])!=store.end()){
                return nums[i];
            }
            store.insert(nums[i]);
        }
    }
};
