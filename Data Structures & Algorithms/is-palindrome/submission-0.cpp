class Solution {
public:
    bool isPalindrome(string s) {

        string store="";
        for (char c : s) {
            if (isalnum(c)) {
                store += tolower(c);
            }
        }
        int i=0;
        int j=store.size()-1;
        while(i<j){
            if(store[i]!=store[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
