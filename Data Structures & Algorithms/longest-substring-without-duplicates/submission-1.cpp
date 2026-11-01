class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>store;
        int l=0;
        int ans=0;
        for(int r=0;r<s.size();r++){
            while(store.find(s[r])!=store.end()){
                store.erase(s[l]);
                l++;
            }
            store.insert(s[r]);
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
