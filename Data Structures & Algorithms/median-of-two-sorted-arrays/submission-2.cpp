class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        if (nums1.size() > nums2.size())
    return findMedianSortedArrays(nums2, nums1);
        int l=0;
        int r=m;

        while(l<=r){
            int px=(l+r)/2;
            int py=(m + n + 1) / 2 - px;

            int left1=INT_MIN;
            int right1=INT_MAX;
            int left2=INT_MIN;
            int right2=INT_MAX;

            if (px > 0) {
                left1 = nums1[px - 1];
                }
            if (px < m) {
                right1 = nums1[px];
            }

            if (py > 0) {
                left2 = nums2[py - 1];
                }
            if (py < n) {
                right2 = nums2[py];
                }
            if (left1 <= right2 && left2 <= right1) {

            int leftMax = max(left1, left2);

            if ((m + n) % 2 == 1)
                return leftMax;

            int rightMin = min(right1, right2);

            return (leftMax + (double)rightMin) / 2;
        }

        if (left1 > right2){
            r = px - 1;
            }
        else{
            l = px + 1;
            }
        }
        return 0.0;
    }
};
