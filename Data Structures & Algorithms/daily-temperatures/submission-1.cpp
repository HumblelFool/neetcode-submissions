class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);
        stack<pair<int,int>>store;
        for(int i=0;i<n;i++){
            int temp=temperatures[i];
            while(!store.empty() && temp>store.top().first){
                pair<int,int>pair=store.top();
                store.pop();
                ans[pair.second]=i-pair.second;
            }
            store.push({temp,i});
        }
        return ans;
    }
};
