class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string> > po {} ;
        vector<string> copy = strs ;
        for(int i = 0 ; i < strs.size() ; i++)
        {
            string im = copy[i];
            sort(im.begin() , im.end()) ;
            (po[im]).push_back(strs[i]) ;
        }
        vector<vector<string>> ou {} ;
        for(auto const x: po)
        {
            ou.push_back(x.second);
        }
        return ou ;
    }
};
