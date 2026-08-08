class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxwater = 0;

        while (left < right) {
             int w = right - left;
            int h = min(height[left], height[right]);
            int currwater =  h * w;
            maxwater = max(maxwater, currwater);

            height[left] < height[right] ? left++ : right-- ; 
        }

        return maxwater;
    }
};
