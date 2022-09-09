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

int difFinder(vector<int>&a, vector<int>&wts)
{
    int sum1=0,sum2=0,dif=0;
    for(int i=0;i<a.size();i++)
    {
        sum1+=a[i];
    }
    for(int i=0;i<wts.size();i++)
        sum2+=wts[i];

    dif = abs(sum2-(2*sum1));    
    return dif;
}

void solve(){
    int n;
    cin>>n;
    vector<int> wts(n);
    for(int i=0;i<n;i++)
        cin>>wts[i];
    int k = 1<<n;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            
        }
    }    
    
    

}

int main(){
    int T=1;
    FOR(t, T){
        solve();
        cout << nl;
    }
    
    return 0;
}