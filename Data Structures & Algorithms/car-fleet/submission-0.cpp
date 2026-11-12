class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>store;
        for(int i=0;i<speed.size();i++){
            store.push_back({position[i],speed[i]});
        }

        sort(store.rbegin(),store.rend());
        vector<double>stack;
        for(auto & st:store){
            stack.push_back((double)(target-st.first)/st.second);
            if(stack.size()>=2 && stack.back()<=stack[stack.size()-2]){
                stack.pop_back();
            }
        }
        return stack.size();
    }
};
