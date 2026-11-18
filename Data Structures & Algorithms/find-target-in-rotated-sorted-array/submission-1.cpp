class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size()-1;
       int l=0;
       int r=n;

       //find the pivot;
       while(l<r) {
        int mid=(l+r)/2;
        if(nums[mid]>nums[r]){
            l=mid+1;
        }else{
            r=mid;
        }
       }

       // Apply Two binary search
       int piviot=l;
        l=0;
        r=n;

       if(target>=nums[piviot] && target<=nums[r]){
        l=piviot;
       }else{
        r=piviot-1;
       }

       while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            l=mid+1;
        }else{
            r=mid-1;
        }
       }
       return -1;
    }
};
