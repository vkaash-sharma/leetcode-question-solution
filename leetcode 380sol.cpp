class RandomizedSet {
public:
    
    vector<int> v;
    unordered_map<int ,int> mp;
     
    RandomizedSet() {
        
        
    }
    
    bool insert(int val) {
       
       if(mp.find(val) != mp.end()){
           return false;
       }
       v.push_back(val);
       mp[val] = v.size() - 1;
       return true; 
        
    }
    
    bool remove(int val) {
        
        if(mp.find(val) == mp.end()){
            return false;
        }
        auto it = mp.find(val);
        v[it->second] =v.back();
        v.pop_back();
        mp[v[it->second]] = it->second;
        mp.erase(val);
        return true;
        
        
    }
    
    int getRandom() {
        
       return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */



//  we have to solve all the function in O(1) so what we have to use 
/* if we use only vector than the operation takes

 insertion:O(1)
 removal:O(N);
 randomNumbers:O(1)
 so it is impossible to use only vector so we have to take the help of the map data structure 
 

 map

 insertion:O(1);
 removal:O(1);
 randomNumber:O(logn);

 */
