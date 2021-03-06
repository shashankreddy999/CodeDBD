int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
if(B>=n)
return 1;

int i = 0;
int t = 0;
int ans = 0;
while(i<n)
{
   
    int flag  =0;
    for(int x = i+B-1; x>=t; x--)
    {
        if(A[x] == 1)
        {
            t = x+1;   //if in case there is no working bulb after (x+B-1) then we will have to use bulb from x to x+B-1 range
            flag =1;
        ans++;
        i = x+B;    //Because all units till (x+B-1) will have light
        break;
        }
    }

    if(i>=n)
    return ans;
    if(flag == 0)   // No working bulb found in given range
    return -1;
}

return ans;
}
