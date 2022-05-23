class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int counter = 0;
        int n = nums.size();
        int i = 0;
        int j = 0;
        int previous_data = 0 ;
        while(j<n){
            if(nums[j]>=left && nums[j]<=right){
                previous_data = j -i +1;
                // cout<<i<<" "<<j<<"\n";
                counter += previous_data;
            }
            else if (nums[j]<=right){
                counter +=previous_data;
            }
            else{
                // cout<<j<<"hii"<<"\n";
                previous_data = 0;
                i=j+1;
            }
            j++;
        }
        return counter;
    }
};

