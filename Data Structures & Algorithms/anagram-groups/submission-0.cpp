class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> dict;
        string word;
        vector<vector<string>>result;
        for(string i : strs)
        {
            word = i;
            sort(i.begin(),i.end());
            dict[i].push_back(word);
        } 
        for(auto& pairs : dict)
        {
            result.push_back(pairs.second);
        }
        return result;
    }
};
