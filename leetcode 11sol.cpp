class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        int area = INT_MIN;
        
        int n = height.size();
        
        int start  = 0;
        int end = n - 1;
        int maxi = 0;
        while(start < end){
            
            if (height[start] < height[end]){
                
                maxi=height[start] *(end -start);
                area = max (area , maxi);
                start++;
            }else{
                 maxi=height[end] * (end -start);
                area = max (area , maxi);
                end--;
            }
        }
        
        return area;
        
        
        
    }
};

//  we have to take the difference between the distance and the  and multiply with the smallest height between start and end