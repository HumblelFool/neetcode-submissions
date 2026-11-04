class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        unordered_set<char>store(s.begin(),s.end());

        for(char c:store){
            int cnt=0;
            int l=0;
            for(int r=0;r<s.size();r++){
                if(s[r]==c){
                    cnt++;
                }
                while((r-l+1)-cnt>k){
                    if(s[l]==c){
                        cnt--;
                    }
                    l++;
                }
                ans=max(ans,r-l+1);
            }
        }
        return ans;
    }
};
