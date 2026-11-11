class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<int,int>store;
        int n=s.size();
        for(int i=0;i<t.size();i++){
            store[t[i]]++;
        }

         int requiredCount = t.length();
        int i = 0;
        int j  = 0;
        int minStart  = 0;
        int minWindow = INT_MAX;

        while(j<n){
            char ch_j=s[j];
            if(store[ch_j]>0){
                requiredCount--;
            }
            store[ch_j]--;


            while(requiredCount==0){
                if(minWindow>j-i+1){
                    minWindow=j-i+1;
                    minStart=i;
                }

                char ch_i=s[i];
                store[ch_i]++;
                if(store[ch_i]>0){
                    requiredCount++;
                }
                i++;
            }
            j++;
        }
        return minWindow == INT_MAX ? "" : s.substr(minStart, minWindow);
    }
};
