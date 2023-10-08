ll s(ll b, ll p, ll m){
	if(p == 0) return 1;
	else if(p%2!=0) return ((b%m)*(s(b, p-1, m)%m))%m;
	else{
		ll t = s(b, p/2, m);
		return ((t%m)*(t%m))%m;
	}
}
