class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto& s : strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            res[temp].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& s : res){
            result.push_back(s.second);
        }
        return result;
    }
};
