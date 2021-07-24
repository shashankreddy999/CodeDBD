int Solution::solve(vector<int> &A) {
    vector<int> B=A;
    sort(B.begin(),B.end());
    int N=size(B);
    if(B[N-1]==0) return 1;
    for(int i =0;i<N;i++){
        if(B[i]!=B[i+1]){
        if(B[i]==N-i-1){
            return 1;
        }}
    }
    return -1;
}
