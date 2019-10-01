#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pi;
#define trace(x) cout<<#x<<"="<<x<<"\n";
#define sz(x) (int)(x.size())
#define mod 1000000007

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define deb(x) cerr << #x << " = " << x << endl;



int32_t main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vi a(n+1);
     vi p(n+1,0);
    vi s(n+1,0);

    REP(i,1,n+1){
        cin>>a[i];
        p[i]=p[i-1]+a[i];
    }
    s[n]=a[n];
    for(int i=n-1;i>=1;i--){
        s[i]=a[i]+s[i+1];
    }
    vi pre(n+1,0);
    REP(i,1,n+1){
        pre[i]=max(pre[i-1],p[i]);
    }
    vi suf(n+2,0);
    suf[n]=max(0LL,s[n]);
    for(int i=n-1;i>=1;i--){
        suf[i]=max(suf[i+1],s[i]);
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=max(ans,pre[i]);
        ans=max(ans,suf[i]);
    }
    cout<<ans<<"\n";
   



    return 0;
}