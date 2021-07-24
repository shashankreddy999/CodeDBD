vector<int> Solution::findPerm(const string A, int B) {
    int ds=1,is=B;
int tis=is;
vector<int> out;

for(int i=0;i<A.size();i++){
    if(A[i]=='D'){
        out.push_back(is);
        is--;
    }
    else{
        out.push_back(ds);
        ds++;
    }
}
for(int j=ds;j<=is;j++){
    out.push_back(j);
}
return out;
}