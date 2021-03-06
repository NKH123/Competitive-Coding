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
#define llp 1000000007
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
const int N = 1e5 + 7;
const int K = 30;
int a[N];
double p[N];

int32_t main(){
	ios::sync_with_stdio(false);
     int t;
    cin>>t;
    
    while (t--) {
        int n;
        cin>>n;
    
        for (int i=1; i<=n; i++)    cin>>a[i];
        for (int i=1; i<=n; i++)    cin>>p[i];
    
        double ans = 0;
    
        for (int i=0; i<K; i++)
        {
            double prob = 0;
            for (int j=1; j<=n; j++){
                deb((a[j] & (1<<i)));
                if (a[j] & (1<<i)){
                cout<<i<<" "<<j<<"\n";                  
                    prob = prob * (1-p[j]) + (1-prob) * p[j];
                }
            }
            deb(prob);
            ans += prob * (1<<i);
        }
        cout<<setprecision(15)<<fixed<<ans<<"\n";
    }



	return 0;
}