class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0;
        int n=heights.size();
       int l=0;
       int r=n-1;
       while(l<r){
          int width =abs(r-l);
          int mini=min(heights[l],heights[r]);
          int store=width*mini;
          res = max(res, store);
          if(heights[l]<=heights[r]){
            l++;
          }else{
            r--;
          }
       }
        return res;
    }
};
