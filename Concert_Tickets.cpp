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
    int n,m;
    cin>>n>>m;
    multiset<int> price;
    vector<int> max(m);
    vector<int> pricePaid(m,-1);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        price.insert(temp);
    }
    for(int i=0;i<m;i++)
        cin>>max[i];
    for(int i=0;i<m;i++)
    {
        if(price.empty()) break;
        auto it = price.lower_bound(max[i]);
        if(it!=price.end() && *it==max[i])
        {
            pricePaid[i] = *it;
            price.erase(it);   
        }
        else if((it--) != price.begin())
        {
            pricePaid[i] = *(it);
            price.erase(it);
        }

    }
    for(auto i=0;i<m;i++)
    {
        cout<<pricePaid[i]<<"\n";
    }
    

}

int main(){
    FAST;
    int T=1;
    FOR(t, T){
        solve();
        cout << nl;
    }
    
    return 0;
}