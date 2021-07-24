class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // all the anagram should be kept in a single string, so we need a key-value pair, which is why map comes up.
        // for every key, you should get multiple strings in a vector
        unordered_map<string, vector<string>> ump;
        
        for(string& i:strs){
            string temp = i;
            // find anagrams. if sorted string is matched, keep them under the same key
            sort(temp.begin(),temp.end());
            ump[temp].push_back(i);
        }
        
        // for(auto& i:ump){
        //   for(auto& j:i.second){
        //       cout<<j<<endl;
        //   }
        // cout<<endl;
        // }
        
        // since the output is two dimensional vector
        vector<vector<string>>anagrams;
        
        // pushing only the values instead of key
        for(auto& i:ump)
            anagrams.push_back(i.second);      
        
        return anagrams;  
    }  
};