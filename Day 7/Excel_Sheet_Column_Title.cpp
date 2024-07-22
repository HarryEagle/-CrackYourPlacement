class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";

        while(columnNumber){
            columnNumber--;
            char str = 'A' + columnNumber%26;
            ans = str + ans;
            columnNumber /= 26;
        }
        
        return ans;
    }
};
