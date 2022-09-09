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

struct Event{
    int time;
    bool type;//arriv=0 or leav=1
};

void solve(){
    int n;
    cin>>n;
    vector<Event> customers(2*n);
    for(int i=0;i<(2*n);i++){
        cin>>customers[i].time;
        customers[i].type=i%2;
    }
    auto comp = [](Event e1, Event e2){ return e1.time < e2.time;};//lambda fn
    sort(customers.begin(),customers.end(), comp);
    int present=0,peak=0;
    for(int i=0;i<(2*n);i++){
        if(!customers[i].type) present++;
        else present--;

        peak=max(present,peak);
    }
    cout<<peak;


    
        
}

int main(){
    int T=1;
    FOR(t, T){
        solve();
        cout << nl;
    }
    
    return 0;
}