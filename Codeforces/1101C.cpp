#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pi;
#define trace(x) cout<<#x<<"="<<x<<"\n";
#define llp 1000000007
#define mod 1000000007


ll power(ll x, ll y) 
{
	ll temp;
	if( y == 0)
		return 1;
	temp = power(x, y/2);
	if (y%2 == 0)
		return (temp*temp)%mod;
	else
		return (((x*temp)%mod)*temp)%mod; 
}

int main()
{   ios::sync_with_stdio(false);
    //freopen("a.in", "r", stdin);
    //freopen("b.in", "r", stdin);
    //freopen("c.in", "r", stdin);
    //freopen("d.in", "r", stdin);
    int t;
    cin>>t;
    vector<pair<int,int> >sega;
    vector<pair<int,int> >segb;
    while(t--){
    	int n;
    	cin>>n;
    	seg.resize(n);
    	for(int i=0;i<n;i++){
    		int a,b;
    		cin>>a>>b;
    		seg[i].F=a;
    		seg[i].S=b;
    		if(sega.size()==0){
    			sega.PB({a,b});
    		}
    	}

    }
    
    return 0;
}