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

// int valReductor(int a, vector<int> &coins){

// }

bool isPossible(int a, vector<int>& coins){

    
   return false; 
}

void solve(){
    int n;
    cin >> n;
    vector<int> coins(n);
    int max_val = 0;
    for(auto i=0;i<n;i++){
        cin >> coins[i];
        max_val+= coins[i];
    }
    sort(coins.begin(),coins.end());        
    for(int i = 1;i<max_val;i++){
        int a = coins[i];
        while(a>0){
        auto it = lower_bound(coins.begin(),coins.end(),a);
        if(it==coins.end()) a = a - coins[coins.size()-1];
        else if(it!=coins.end() && *it == a ) a = a - *it;
        else{
            a = a - *(it-1);
        }
    }
    if(a<0){
        cout<<coins[i];return;
    }
    }
    cout<<0;
        
    
    
}

int main(){
    int T=1;
    FOR(t, T){
        solve();
        cout << nl;
    }
    
    return 0;
}