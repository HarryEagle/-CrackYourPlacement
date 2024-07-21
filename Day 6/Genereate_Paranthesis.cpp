class Solution {
public:
    vector<string> ans;
    void help(int open , int close , int n , string current){
        if(current.length() == n*2){
            ans.push_back(current);
            return;
        }

        if(open < n){
            help(open+1 , close , n , current + "(");
        }
        if(close < open){
            help(open , close+1 , n , current + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        help(0,0,n,"");
        return ans;
    }
};
