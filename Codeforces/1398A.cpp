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
#define endl "\n"
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
    int t;
    cin>>t;
    vector<pair<int, int> >a;
    while(t--) {
    	int n;
    	cin>>n;
    	a.clear();
    	a.resize(n);
    	REP(i,0,n){
    		cin>>a[i].F;
    		a[i].S = i+1;
    	}
    	sort(a.begin(), a.end());
    	int A = a[0].F;
    	int B = a[1].F;
    	int C = a[a.size()-1].F;
    	vi b = {a[0].S, a[1].S, a[a.size()-1].S};
    	if ((A+B) <= C){
    		sort(b.begin(), b.end());
    		REP(i,0,3){
    			cout<<b[i]<<" ";
    		}
    		cout<<"\n";
    	}
    	else{
    		cout<<-1<<"\n";
    	}
    }

    return 0;
}