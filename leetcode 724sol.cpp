class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       
        
        int sum = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            sum+=nums[i];
            
        }
        int lsum = 0;
        int rsum = sum;
        
        for(int i = 0 ; i<nums.size() ; i++){
         
            rsum = rsum - nums[i];
            
            if (lsum == rsum){
                return i;
            }
            
            lsum+=nums[i];
        
        }
        return -1;
    }
};

//  simply we have to take the sum of the all array what we have to do is really simple


    // [1,7,3,6,5,6]
   /*  -------------rsum = sum(right sum = sum) 
    lsum------|               if (lsum == rsum ) the we have to return the value of i;

    */
