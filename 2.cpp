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
//////////////////////////////////////////////////////////////////////////////
bool comp(pair<string, int> a, pair<string, int> b)
{
	if (a.second != b.second)
		return a.second > b.second;
	return a.first < b.first;
}
void solve()
{
	int n, m;
	cin >> n >> m;
	map<string, string> chefs;
	string name, country;
	for (int i = 0; i < n; ++i)
	{
		cin >> name >> country;
		chefs[name] = country;
	}
	map<string, int> na, co;
	for (int i = 0; i < m; ++i)
	{
		cin >> name;
		na[name]++;
		co[chefs[name]]++;
	}
	vector<pair<string, int>> nam(na.begin(), na.end());
	vector<pair<string, int>> cou(co.begin(), co.end());
	sort(nam.begin(), nam.end(), comp);
	sort(cou.begin(), cou.end(), comp);
	cout << cou[0].first << endl;
	cout << nam[0].first << endl;
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
