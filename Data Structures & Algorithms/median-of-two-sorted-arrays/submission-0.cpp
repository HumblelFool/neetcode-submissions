class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>store;
        for(int i=0;i<nums1.size();i++){
            store.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            store.push_back(nums2[i]);
        }
        sort(store.begin(),store.end());

        if(store.size()%2!=0){
            return store[store.size()/2];
        }else{
            return (store[store.size()/2] + store[(store.size()/2)-1]) / 2.0;
        }
    }
};
