class Solution {
public:
int findMax(vector<int>&piles){
    int maxi=INT_MIN;
    for(int i=0;i<piles.size();i++){
        maxi=max(maxi,piles[i]);
    }
    return maxi;
}

long long tothr(vector<int>&piles,int hr){
    long long totalHr=0;
    for(int i=0;i<piles.size();i++){
       totalHr += (piles[i] + (long long)hr - 1) / hr;
    }
    return totalHr;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findMax(piles);

        while(low<=high){
            int mid=(low+high)/2;
            long long totalHr=tothr(piles,mid);
            if(totalHr<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};
