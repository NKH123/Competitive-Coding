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
    // ios::sync_with_stdio(false);
    int t;
    cin>>t;
    vi a;
    vi b;
    vector<char>Begin;
    vector<char>End;
    string s,r;
    while(t--){
        s="";
        r="";
        cin>>s>>r;
        a.clear();
        b.clear();
        a.resize(2,0);
        b.resize(2,0);
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<r.size();i++){
            b[r[i]-'a']++;
        }
        Begin.clear();
        End.clear();
        int f=1;
        for(int i=0;i<2;i++){
            if(b[i]<a[i]){
                f=0;
            }
        }
        if(f==0){
            cout<<"Impossible\n";
        }
        else{
            for(int i=0;i<2;i++){
                b[i]-=a[i];
            }
            char First=s[0];
            for(int i=0;i<2;i++){
                char cur='a'+i;
                if(b[i]>0){
                    if(cur<=First){
                        for(int j=0;j<b[i];j++){
                            Begin.PB(cur);
                        }
                    }
                    else{
                        for(int j=0;j<b[i];j++){
                            End.PB(cur);
                        }
                    }
                }
            }
            for(int i=0;i<Begin.size();i++){
                cout<<Begin[i];
            }
            // cout<<s;
            for(int i=0;i<s.size();i++){
                cout<<s[i];
            }
            for(int i=0;i<End.size();i++){
                cout<<End[i];
            }
            cout<<"\n";
        }


    }



    return 0;
}