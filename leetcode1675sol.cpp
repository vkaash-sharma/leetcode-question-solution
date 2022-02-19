class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        priority_queue<int> pq;
        int mini = INT_MAX;
        for (int i = 0 ; i < nums.size() ; i++){
            
            if (nums[i] % 2 == 1){
                
                nums[i]*=2;
            }
            mini = min(mini , nums[i]);
            pq.push(nums[i]);
        }
        
        int diff=INT_MAX;
        int maxi;
        while(pq.top()%2 ==0){

            maxi=pq.top();
            pq.pop();
            diff = min(diff , maxi - mini);
            mini = min(mini , maxi/2);
            pq.push(maxi/2);
        }
        
        
        return min(diff , pq.top() - mini);
        
        
    }
};


// The intution is really super simple we make  a priority queue first what we do is multiply odd number by 2 because we  known that  2*odd= even so change the odd to even the push into the queue and also we have to take the minimum from the queue the we know that the top of the priority queue is maximum we run a loop till maximum value id equal to odd number then what we have to do is to take the top value and check the difference max-min if it is smaller than previous then we update that then we check by doing max/2 mini cannot be change so we check the min btw min max/2  and we push the max/2   lastly check min btw min btw dii and top-min so it is intutin behind this

// https://leetcode.com/problems/minimize-deviation-in-array/discuss/1781805/A-very-very-Highly-Detailed-EXPLANATION