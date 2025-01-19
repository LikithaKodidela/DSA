class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int left=0;
        int right=height.size()-1;
        while(left < right)
        {
            int width =right -left;
            int h=(height[left] <height[right])? height[left]:height[right];
            int area=width*h;
            if(area > max_area)
            {
                max_area=area;
            }
            if(height[left] <height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
      
        return max_area;
    }
};
 /* while(left < right)
        {
            max_area=max(max_area,(right-left)*min(height[left],height[right]));
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }*/