int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count=0;
    for(int i=0;i<size(A)-1;i++){
        int m =A[i+1]-A[i];
        int n =B[i+1]-B[i];
        m=abs(m);
        n=abs(n);
        if(m!=0 && n!=0){
            count=count+max(m,n);
            continue;
        }
        if(m!=0 || n!=0){
            count=count+max(m,n);
        }
    }
    return count;
}