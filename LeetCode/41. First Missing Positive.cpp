class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> temp;
        for(auto i : nums){
            if(i>0)
                temp.push_back(i);
        }
        if(size(temp)==0){
            return 1;
        }
        sort(temp.begin(),temp.end());
        temp.erase( unique( temp.begin(), temp.end() ), temp.end() );
        if(temp[0]>1){
            return 1;
        }
        else{
            for(int i;i<size(temp)-1;i++){
                if(temp[i+1]!=temp[i]+1){
                    return temp[i]+1;
                }
            }
        }
        return (*max_element(temp.begin(),temp.end()))+1;
    }
};