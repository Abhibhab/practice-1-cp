/* 
#############################################
Author: hellgod_13
#############################################
*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define INF INT_MAX
#define ll long long
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define ld long double
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define f(i,a,b) for(int i=a;i<b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--)
#define max(a, b) (             \
    {                           \
        __typeof__(a) _a = (a); \
        __typeof__(b) _b = (b); \
        _a > _b ? _a : _b;      \
    })
#define min(a, b) (             \
    {                           \
        __typeof__(a) _a = (a); \
        __typeof__(b) _b = (b); \
        _a < _b ? _a : _b;      \
    })
//////////////////////////////////////////////////////////////////////////////
int power(int a, int b)
{
    int res = 1ll;
    while (b > 0)
    {
        if (b % 2ll)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2ll;
    }
    return res;
}
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = (res * i) % MOD;
    }
    return res % MOD;
}
bool comp(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
//////////////////////////////////////////////////////////////////////////////

void solve()
{

    int a[] = {3,4,6,2,1};
int size = sizeof(a)/sizeof(a[0]);
std::sort(a, a+size);
do {
    for(auto it:a){
        cout<<it<<" ";

    }
  // print a's elements
} while(std::next_permutation(a, a+size));
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
}
