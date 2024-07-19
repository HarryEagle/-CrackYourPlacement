class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        int ans = 0;

        unordered_map<int,int> ump;
        ump[0] = 1;
        int sum = 0;
        int rem = 0;

        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            rem = sum % k;
            if(rem < 0){
                rem+= k;
            }

            if(ump.find(rem) != ump.end()){
                ans += ump[rem];
                ump[rem]++;
            }
            else{
                ump[rem]++;
            }
        }

        return ans;
    }
};
