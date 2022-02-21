class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int count = 1;
        sort(intervals.begin() , intervals.end());
        
        int x1 = intervals[0][0];
        int x2 = intervals[0][1];
        
        for(int i = 1 ; i<intervals.size() ; i++){
            
            if (intervals[i][0] > x1  && intervals[i][1] > x2){
                count++;
            }
            
            if (intervals[i][1] > x2){
                 x1 = intervals[i][0];
                 x2 = intervals[i][1];
            }
        }
        
        return count;
        
        
    }
};

// the intution is super simple we sort the array and we check the condition we is not followed so we clearly say that is is not in covered  in the same bond .....so we check where a[0][0] <a[1][0] and a[0][1] < a[1][1] so we clearly say that this is not in our bond and we chand the value of x1 x2 when b > d because we sure that is not the value becoz the array is sorted so the approach is simple think about the optimised solution 