class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        
        vector<int> mytime(60 , 0);
        
        int ans = 0;
        
        for(int i = 0 ; i < time.size() ; i++){
            
            int val = time[i] % 60;
            
            if(val==0){
                ans+=mytime[val];
            }
            else if(val!=0){
                ans+=mytime[60-val];
            }
            mytime[val]++;
            
        }
        
        return ans;
        
    }
};


// we have to check first we have to modulo every element of the array then what we have to do if the modulo is equal to the 0 then we have to check the value at that location in our array/vector if the modulo is not equal to 0 the we have to minus the modulo element with 60 means (60-times[i]%60) and put the elemnt and check that location for the answer afeter all this what we have to do is we have to put all we get location we have to increment the values of that location....