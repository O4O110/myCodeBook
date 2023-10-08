long long binpow(long long a, long long b){
    if(b==0) return 1;
    int res = binpow(a, b/2);
    if(b%2==0) return res*res;
    else return res*res*a;
}
