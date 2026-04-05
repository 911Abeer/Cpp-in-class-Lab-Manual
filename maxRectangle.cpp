#include<iostream>

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        // Handle empty matrix case
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Heights array to store the histogram heights for each column
        vector<int> heights(cols, 0);
        int maxArea = 0;
        
        // Process each row as the base of histogram
        for (int i = 0; i < rows; i++) {
            // Update heights for current row
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    heights[j]++;  // Extend the height if we see a '1'
                } else {
                    heights[j] = 0;  // Reset height if we see a '0'
                }
            }
            
            // Calculate largest rectangle in current histogram
            stack<int> st;
            for (int j = 0; j <= cols; j++) {
                // When j == cols, we add a sentinel height of 0 to process remaining bars
                int currentHeight = (j == cols) ? 0 : heights[j];
                
                // While stack is not empty and current height is less than the height at stack top
                while (!st.empty() && currentHeight < heights[st.top()]) {
                    int height = heights[st.top()];
                    st.pop();
                    
                    // Calculate width: if stack is empty, width = j, else width = j - st.top() - 1
                    int width = st.empty() ? j : j - st.top() - 1;
                    
                    // Update max area
                    maxArea = max(maxArea, height * width);
                }
                
                // Push current index onto stack
                st.push(j);
            }
        }
        
        return maxArea;
    }
};