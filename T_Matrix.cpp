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
    int x;
    cin>>x;
    int arr[x][x];
    f(i,0,x){
        f(j,0,x){
            cin>>arr[i][j];
        }
    }
    vi primary;
    vi secondary;
    f(i,0,x){
        f(j,0,x){
            if(i==j){
              primary.PB(arr[i][j]);
            }
            else if(i+j==x-1){
                secondary.PB(arr[i][j]);
            }else{
                continue;
            }
        }   
}
int primary_sum=accumulate(primary.begin(),primary.end(),0);
int secondary_sum=accumulate(secondary.begin(),secondary.end(),0);
(x%2==0)?(cout<<abs(primary_sum-secondary_sum)<<endl):(cout<<abs(primary_sum-secondary_sum)-arr[x-1][x-1]<<endl);
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
