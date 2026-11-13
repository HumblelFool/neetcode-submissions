class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> leftMost(n, -1);
        vector<int> rightMost(n, n);

        stack<int> store;

        // Find nearest smaller element on left
        for(int i = 0; i < n; i++) {
            while(!store.empty() && heights[store.top()] >= heights[i]) {
                store.pop();
            }

            if(!store.empty()) {
                leftMost[i] = store.top();
            }

            store.push(i);
        }

        // Clear stack
        while(!store.empty()) {
            store.pop();
        }

        // Find nearest smaller element on right
        for(int i = n - 1; i >= 0; i--) {
            while(!store.empty() && heights[store.top()] >= heights[i]) {
                store.pop();
            }

            if(!store.empty()) {
                rightMost[i] = store.top();
            }

            store.push(i);
        }

        // Calculate maximum area
        int maxArea = 0;

        for(int i = 0; i < n; i++) {
            int width = rightMost[i] - leftMost[i] - 1;

            int area = heights[i] * width;

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};