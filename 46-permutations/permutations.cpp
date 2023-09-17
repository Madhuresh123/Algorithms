class Solution {
public:

    void backtrack(vector<vector<int>>& ans,vector<int>& list, vector<int>& nums){

        if(nums.size() == list.size()){
            ans.push_back(list);
            return;
        }
        else{
            for(int i=0;i<nums.size();i++){

                if( find(list.begin(),list.end(),nums[i]) != list.end()) continue;

                list.push_back(nums[i]);
                backtrack(ans,list,nums);
                list.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> list;
        backtrack(ans,list,nums);
        return ans;
    }
};