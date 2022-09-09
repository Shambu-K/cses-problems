#include <bits/stdc++.h>

using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0)
template<class T> struct V: vector<T>{using vector<T>::vector;
    void sort()			{std::sort(this->begin(), this->end());}
    void sort_dsc() 	{std::sort(this->begin(), this->end(), greater<T>());}
    auto sum() 			{T sum = 0; for(auto& i: *this) sum += i; return sum;}
    auto freqs() 		{map<T, int> freq; for(auto& i: *this) freq[i]++; return freq;}
    friend ostream& operator<<(ostream& out, const V<T>& v) {for(auto& i: v) out << i << ' '; return out;}
    friend istream& operator>>(istream& in, V<T>& v) {for(auto& i: v) in >> i; return in;}
};
#define pY {cout << "YES"; return;}
#define pN {cout << "NO";  return;}

#define FOR(i, n)                for(int i = 0; i < (int)n; ++i)
#define all(v)                   v.begin(), v.end()

#define F  first
#define S  second
constexpr char nl = '\n';
constexpr int MOD = 1000000007;
using ll  = long long int;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi  = V<int>;
using vll = V<ll>;


void balle(vector<int>&a,int li, int ri)
{
    for(int i=0;i<a.size();i++)
    {
        if(ri==a[i]) 
        {
            ri=i;
            cout<<i+1<<" ";
            break;
        }
        
    }
    
    for(int i=0;i<a.size();i++)
    {
        if(li==a[i] && i!=ri) 
        {
            cout<<i+1<<" ";
            break;
        }
        
    }
    //lets proceed shall we
    
}
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n),b(n);
    for(auto i=0;i<n;i++)
        cin>>b[i];
    a = b;
    //we gonna use bbbbbb    
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        auto it = lower_bound(a.begin(),a.end(),x-a[i]);
        if(it!=a.end() && *it==(x-a[i]) && i!=(it-a.begin()))
        {
            int li = a[i];
            int ri = x-a[i];
            balle(b,li,ri);
            return;
        }
    }

    cout<<"IMPOSSIBLE\n";
        

}

int main(){
    int T=1;
    FOR(t, T){
        solve();
        cout << nl;
    }
    
    return 0;
}