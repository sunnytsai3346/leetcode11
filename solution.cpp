class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int n = height.size();
        int left = 0;                // Initialize left pointer
        int right = n -1;            // Initialize right pointer
        
        while (left < right) {       // Loop until pointers meet
            int width = right - left; // Calculate width between pointers
            int h = min(height[left], height[right]); // Determine the limiting height
            int currentArea = width * h; // Calculate current area
            
            area = max(area, currentArea); // Update maximum area if necessary
            
            // Move the pointer pointing to the shorter line
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        
        return area; // Return the maximum area found
    }
};
