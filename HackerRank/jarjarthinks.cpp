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
    while(t--){
    	int n, m;
    	cin>>n>>m;
    	// cout<<"YES\n";
    	if(n>m){
    		swap(n,m);
    	}
    	// if(n<=13){
    	// 	cout<<"YES\n";
    	// }
    	// else if(n==14){
    	// 	if(m==14){
    	// 		cout<<"YES\n";
    	// 	}
    	// 	else{
    	// 		cout<<"NO\n";
    	// 	}
    	// }
    	// else{
    	// 	cout<<"NO\n";
    	// }
    	if(n>=3){
    		cout<<"NO\n";
    	}
    	else{
    		cout<<"YES\n";
    	}
    }

    return 0;
}

**deadline is 6 AM
	* Do Google stuff
	* Upsolve everything
	* Leetcode 50 questions
	* CF 5 questions 1600
