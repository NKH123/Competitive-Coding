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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A=0, B=0;
        for(int i=0;i<n;i++){
            int t, a, b;
            cin>>t>>a>>b;
            if(t==1){
                cout<<"YES\n";
                A=a;
                B=b;
            }
            else{
                //if draw
                if(a==b){
                    cout<<"YES\n";
                    A=a;
                    B=b;
                }
                else{
                    if((a<A) || (a<B) || (b<A) || (b<B)){
                        cout<<"YES\n";
                        if(a<A){
                            A=b;
                            B=a;
                        }
                        else if(a<B){
                            B=b;
                            A=a;
                        }
                        else if(b<A){
                            A=a;
                            B=b;
                        }
                        else if(b<B){
                            B=a;
                            A=b;
                        }
                        //update properly

                    }
                    else{
                        cout<<"NO\n";
                    }
                }

                //if both greater
            }
        }
    }



    return 0;
}