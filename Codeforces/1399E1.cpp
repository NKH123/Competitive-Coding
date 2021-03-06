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


vector<vector<pair<int,int> > >adj;
priority_queue<int>pq;
int sum=0;
int dfs(int v, int p){
    int no=0;
    if(adj[v].size() == 1){
        no=1;
    }
    for(auto g:adj[v]){
        if(g.F!=p){
            int val=dfs(g.F, v);
            no+=val;
            for(int i=0;i<val;i++){
                pq.push(g.S);
                sum+=g.S;
            }
        }
    }
    return no;
}
int32_t main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        adj.clear();
        int n, S;
        cin>>n>>S;
        adj.resize(n+1);
        pq = priority_queue <int>();
        sum=0;
        for(int i=0;i<n-1;i++){
            int A, B, C;
            cin>>A>>B>>C;
            adj[A].PB({B, C});
            adj[B].PB({A,C});
        }
        dfs(1,-1);
        int ans =0;
        while(sum>S){
            int maxi = pq.top();
            pq.pop();
            sum-=maxi;
            maxi =maxi/2;
            sum+=maxi;
            pq.push(maxi);
            ans++;
        }
        cout<<ans<<"\n";
    }

    return 0;
}