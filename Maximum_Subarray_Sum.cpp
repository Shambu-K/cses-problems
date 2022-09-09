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


void solve(){
    long long int n;
    cin>>n;
    vector<long long int> a(n);
    for(auto i=0;i<n;i++)
        cin>>a[i];
    long long int cur_sum = a[0];
    long long int max_sum = a[0];
    for(auto i=1;i<n;i++){
        cur_sum = max(a[i],cur_sum+a[i]);
        // cur_sum = max(cur_sum, 0);
        max_sum = max(cur_sum,max_sum);
    }
    cout<<max_sum;

}

int main(){
    int T=1;
    FOR(t, T){
        solve();
        cout << nl;
    }
    
    return 0;
}