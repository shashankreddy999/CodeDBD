class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for(int i =0;i<size(nums);i++){
            for(int j=i+1;j<size(nums);j++){
                if(nums[i]+nums[j]==target){
                    output.push_back(i);
                    output.push_back(j);
                    break;
                }
            }
        }
        return output;
    }
};