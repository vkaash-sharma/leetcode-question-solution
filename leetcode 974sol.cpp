class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        
    map<int,int> mp;
    mp[0] =  1;
    int sum =  0;
    int count = 0;    
    for(int i = 0 ; i < nums.size() ; i++){
           
        sum += nums[i];
        int rem = sum % k ;
        
        if(rem <  0 ){
            rem = k + rem;
        }
        
        count += mp[rem];
        
        mp[rem]++;
        
        
        }
        
        return count;
    }
};


// we have to use the prefix sum approach in this question what we have to do we have to care of the previous value of an array and we have to add with next value and modulo with k value if my remainder value is present in my map so we have to take their frequencies as a count because it tells how many number of subarray is found and make the k divisible subarrays