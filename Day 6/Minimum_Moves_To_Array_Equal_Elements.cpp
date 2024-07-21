Minimum Moves to Equal Array Elements II

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int med = nums[n/2];
        for(int i = 0 ; i < n ; i++){
            ans += abs(med-nums[i]);
        }
        return ans;
    }
};
