int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> mapp;
    int xorr=0,cnt=0;

    for(int i=0;i<A.size();i++){
        xorr=xorr^A[i];
        if(xorr==B)
            cnt++;
        if(mapp.find(xorr^B)!=mapp.end()){
            cnt+=mapp[xorr^B];
        }
        mapp[xorr]++;
    }
    return cnt;
}
