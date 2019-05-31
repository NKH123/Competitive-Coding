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


int32_t main(){
	ios::sync_with_stdio(false);
    int n, m;
    cin>>n>>m;
    vector<vector<int> >a(n,vector<int>(m));
    vector<vector<int> >b(n,vector<int>(m));
    REP(i,0,n){
        REP(j,0,m){
            cin>>a[i][j];
        }
    }
    REP(i,0,n){
        REP(j,0,m){
            cin>>b[i][j];
        }
    }
    vector<vector<int> >c(n,vector<int>(m));
    REP(i,0,n){
        REP(j,0,m){
            // cin>>b[i][j];
            if(a[i][j]!=b[i][j]){
                c[i][j]=1;
            }
            else{
                c[i][j]=0;
            }
        }
    }
    vi row(n),col(m);
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
            if(c[i][j]==1){
                row[i]++;
                col[j]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(row[i]%2!=0){
            cout<<"No\n";
            return false;
        }
    }
    for(int i=0;i<m;i++){
        if(col[i]%2!=0){
            cout<<"No\n";
            return false;
        }
    }
    cout<<"Yes\n";



	return 0;
}