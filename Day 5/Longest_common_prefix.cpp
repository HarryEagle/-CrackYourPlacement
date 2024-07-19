class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int index = 0;
        string ans;

        while(index < first.size()){
            if(first.at(index) == last.at(index)){
                index++;
            }
            else{
                break;
            }

            ans = index==0 ? "" : first.substr(0,index);
        }
        return ans;
    }
};
