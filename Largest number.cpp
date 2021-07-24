bool com(const int &a,const int &b){
string s1=to_string(a)+to_string(b);
string s2=to_string(b)+to_string(a);

return s1>s2;
}

string Solution::largestNumber(const vector<int> &A) {
    string ans="";
    vector<int> B=A;
    if(B[0]==0)
    return "0";
    sort(B.begin(),B.end(),com);
    for(auto i: B){
        ans=ans+to_string(i);
    }
    return ans;
}
