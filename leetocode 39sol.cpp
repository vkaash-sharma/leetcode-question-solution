class Solution {
public:
    
    void helper(int ind , vector<int> &a ,int target , vector<int> ds , vector<vector<int>> & ans){
        
        if(ind == a.size()){
            
            if(target ==0){
                ans.push_back(ds);
            }
            return ;
        }
        
        
        
        if(a[ind] <= target ){
            
            ds.push_back(a[ind]);
             helper(ind, a , target - a[ind] , ds , ans);
              ds.pop_back();
        }
        
        helper(ind + 1 , a , target , ds , ans);
    }
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        helper(0 , candidates , target , ds , ans);
        return ans;
    }
};


// in this what we have to we have to thing about if we tahe the element or if we do not take the element for ex:
// [2 , 3 , 6 , 7 ]
/*
thing about we take 2

keep subtracting 2 from target till  the target is =0 are if target value is less then array value in this case it is 2

7-2=5    
5-2 =3    
3-2=1
------------
we stop there and keep increment the ind if we make our target id =0 aur if we hit the last index we simple retur than there is extra 2 in our vector so we have to take of poping out that value also

so this is what we have to do in this question


 Happy coding
*/
