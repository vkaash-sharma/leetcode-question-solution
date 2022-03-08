class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int idx = -1;
        
        int n = nums.size();
        for (int i = n - 1 ; i >0 ; i-- ){
            
            if (nums[i - 1]<nums[i]){

                idx = i;
                break;
            }
        }
        if (idx == - 1){
            reverse(nums.begin(), nums.end());
        }
        else{
            
            int prev = idx;
            for(int i = idx +1 ; i < n ; i++){
          
                if(nums[idx - 1] < nums[i] && nums[prev] >=nums[i]){
                    prev = i;
                }
            
            }
            
            swap(nums[prev] ,nums[idx - 1]);
            reverse(nums.begin() + idx , nums.end());
        }
    }
};

// the question is to check the array from the last if we hit the number which is decreasing in nature so we simply  swap that number we the nearest increasing number and then we have to inverse the array from that location where we find the smallest digit
/*
  1 5  8 4 7 6 5 3 1

  so we start from last digit using pointer approach we simply traverse the array
  1 < 3 , 3 < 5 , 5 < 6 , 6 < 7 ,7 < 4(which is fasle)
  we mark the pointer idx at location 4,
  the we check the number which is just greater than the 4,
  we iterate the loop from id+1 location and check idx- 1 < nums[i] && nums[prev] >=nums[i];
  then what we have to is to swap 4 and 5  and then from 7 to till end we have to reverse the array so this is what we have to do to find the next permutation 


  HAPPY CODING*/
   