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
vi adj[100005];
vi vis;
vector<pair<int,int> >ans;
void dfs(int v){
    vis[v]=1;
    for(auto g:adj[v]){
        if(!vis[g]){
            ans.PB({v,g});
            dfs(g);
        }
    }
}
int32_t main(){
	ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    vis.clear();
    vis.resize(n+1);
    REP(i,0,m){
        int A,B;
        cin>>A>>B;
        adj[A].PB(B);
        adj[B].PB(A);
    }

    dfs(1);
    cout<<ans.size()<<"\n";
    REP(i,0,ans.size()){
        cout<<ans[i].F<<" "<<ans[j].F<<"\n";
    }


	return 0;
}