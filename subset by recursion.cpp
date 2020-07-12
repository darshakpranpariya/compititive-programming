// made this program to find out all the subset of the array using recursion....

class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> nums,vector<int>& temp){
        if(nums.size()==0){
            ans.push_back(temp);
            return;
        }
        vector<int> v1 = temp;
        vector<int> v2 = temp;
        v1.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums,v1);
        solve(nums,v2);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(nums,temp);
        return ans;
    }
};
