class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>ans;
        for(auto x: nums){
            if(x!=0){
                ans.insert(x);
            }
        }
        return ans.size();
    }
};