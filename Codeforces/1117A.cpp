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


int main(){
	ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vi a(n);
    int lar=-1;
    REP(i,0,n){
        cin>>a[i];
        lar=max(lar,a[i]);
    }
    int ct=0;
    vi b;
    REP(i,0,n){
        if(a[i]==lar){
            ct++;
            b.PB(i);
        }
    }
    if(ct==1){
        cout<<1<<"\n";
    }
    else{
        int ans=1;
        int Ans=1;
        //deb(b);
        REP(i,1,b.size()){
            if(b[i]==b[i-1]+1){
                Ans++;
                ans=max(ans,Ans);
            }
            else{
                ans=max(ans,Ans);
                Ans=1;
            }
        }
        cout<<ans<<"\n";
    }



	return 0;
}