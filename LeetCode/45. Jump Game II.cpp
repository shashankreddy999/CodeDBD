class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size(),far = nums[0],jump  = 0,currpos = 0;
        if(n==1)
            return 0;
        for(int i=0;i<n;i++){
            far = max(far,nums[i] + i);
            if(i==currpos){
                jump++;
                currpos = far;
            }
            if(currpos >= n-1)
                break;
        }
        return jump;
    }
};